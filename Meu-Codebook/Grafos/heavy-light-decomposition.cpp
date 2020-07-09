#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<17)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define left(u) (2*u)
#define right(u) (2*u+1)
#define mid(i,j) ((i+j)/2)
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))

using namespace std;

int n, l;
int timer;
vi tin, tout;
vvi up;

vvii adj;

//particuaridade da qtree
map<int, map<int, int> > idx_edge_uv;


void dfs(int v, int p){
    tin[v] = ++timer;
    up[v][0] = p;
    for (int i = 1; i <= l; ++i)
        up[v][i] = up[up[v][i-1]][i-1];

    for (auto uw : adj[v]) {
        int u = uw.fs;
        if (u != p)
            dfs(u, v);
    }

    tout[v] = ++timer;
}

bool is_ancestor(int u, int v){
    return tin[u] <= tin[v] && tout[u] >= tout[v];
}

int lca(int u, int v){
    if (is_ancestor(u, v))
        return u;
    if (is_ancestor(v, u))
        return v;
    for (int i = l; i >= 0; --i) {
        if (!is_ancestor(up[u][i], v))
            u = up[u][i];
    }
    return up[u][0];
}

void preprocess(int root) {
    tin = vi(n);
    tout = vi(n);
    timer = 0;
    l = ceil(log2(n));
    up.assign(n, vi(l + 1));
    dfs(root, root);
}

int tree[4*MAX], bast[MAX];

int operacao(int esq, int dir){
    return max(tree[esq], tree[dir]);
}

void build(int u, int i, int j){

    if (i == j){
        tree[u] = bast[i];
        return;
    }

    build(left(u), i, mid(i,j));
    build(right(u), mid(i,j)+1, j);

    tree[u] = operacao(left(u), right(u));
}

void update(int u, int i, int j, int idx, int val){

    if (i == j){
        tree[u] = bast[i] = val;
        return;
    }

    if (i<=idx && idx<=mid(i,j)){
        update(left(u), i, mid(i,j), idx, val); // esquerda
    }
    if (mid(i,j)+1<=idx && idx<=j){
        update(right(u), mid(i,j)+1, j, idx, val); // direita
    }

    tree[u] = operacao(left(u), right(u));
}

int query(int u, int i, int j, int l, int r){

    if (l<=i && j<=r){
        return tree[u];
    }

    if (j<l || i>r){
        return INT_MIN; // termo neutro da operação
    }

    int ans_esq = query(left(u), i, mid(i,j), l, r);
    int ans_dir = query(right(u), mid(i,j)+1, j, l, r);

    return max(ans_esq, ans_dir);
}

vi head, pos, parent, depth, heavy, entry_cost;
int cur_pos;
vi idx_edge_end, pos_edge_on_bast; //particularidade da qtree

int dfs_hld(int u, vvii &adj){
    int size = 1;
    int max_size = 0;

    for (auto vw : adj[u]){
        int v = vw.fs, w = vw.sc;
        if (v != parent[u]){
            parent[v] = u;
            depth[v] = depth[u]+1;
            entry_cost[v] = w;

            idx_edge_end[v] = idx_edge_uv[u][v];//salvando indíce da aresta que entra em v
        
            int v_size = dfs_hld(v, adj);
            size += v_size;
        
            if (v_size > max_size){
                max_size = v_size; heavy[u] = v;
            }
        }
    }
    
    return size;
}

void hld(int u, int h){
    head[u] = h; 

    pos[u] = ++cur_pos;
    pos_edge_on_bast[idx_edge_end[u]] = cur_pos;
    bast[cur_pos] = entry_cost[u];

    if (~heavy[u]){
        hld(heavy[u], h);
    }
    for (auto vw : adj[u]){
        int v = vw.fs;
        if (v != parent[u] && v != heavy[u]){
            hld(v, v);
        }
    }

    
    // for (int u=1, cur_pos=1; u<=n; ++u){
    //     if (parent[u]==0 || heavy[parent[u]] != u){
    //         for (int v=u; ~v; v = heavy[v]){
    //             head[v] = u;
    //             pos[v] = cur_pos;
    //             bast[cur_pos] = entry_cost[v];
                
    //             pos_edge_on_bast[idx_edge_end[v]] = cur_pos;//particular da qtree

    //             ++cur_pos;
    //         }
    //     }
    // }
    
}

int query_up(int a, int b){
    int ans = 0;
    for (; head[a] != head[b]; b=parent[head[b]]){
        if (depth[head[a]] > depth[head[b]]) swap(a,b);

        ans = max(ans, query(1, 1, n, pos[head[b]], pos[b]));
    }
    if (depth[a] > depth[b]) swap(a,b);
    ans = max(ans, query(1, 1, n, pos[a]+1, pos[b]));// precisa do +1 porque bast[i] guarda o peso da aresta vinda do parent[i], logo no lca processaria a aresta acima dela

    return ans;
}

void update_hld(int idx, int val){
    update(1, 1, n, pos_edge_on_bast[idx], val);
}

void init_decompose(vvii &adj){
    parent = vi(n); //observe que o parent da raiz é zero por omissão
    depth = vi(n); //QUANTO MAIOR , MAIOR A POSIÇÃO EM BAST[]
    heavy = vi(n, -1);
    head = vi(n);
    pos = vi(n); 
    entry_cost = vi(n);
    cur_pos = 0;


    idx_edge_end = vi(n);
    pos_edge_on_bast = vi(n);

    dfs_hld(1, adj);// 1-indexado e raiz 1
    hld(1, 1);//1 é raiz e head de seu heavy-path;
    build(1, 1, n);
}

int t,u,v,w,k;
string s;

int main(){_
    cin.tie(0);
    cin >> t;
    while (t--){
        cin >> n;
        adj = vvii(n+1);
        for (int i=1; i<=n-1; ++i){
            cin >> u >> v >> w;
            adj[u].eb(v,w);
            adj[v].eb(u,w);

            //particularidade da qtree
            idx_edge_uv[u][v] = i;
            idx_edge_uv[v][u] = i;
        }
        ++n;
        preprocess(1); //pre-calcula lca's
        init_decompose(adj);
        while ((cin >> s) && s[0]!='D'){
            cin >> u >> v;
            if (s[0]=='Q'){
               cout <<  query_up(u,v) << endl;  // POR QUE NÃO PRECISA do LCA?
            }
            else {
                update_hld(u, v);
            }
        }

    }
    return 0;
}
