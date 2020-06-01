#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (int)(5e5 + 7)
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

int n;
vvi adj;

int tree[4*MAX], lazy[4*MAX];

void push(int v, int tl, int tr){
	if (lazy[v]){
		tree[v] += (tr-tl+1)*lazy[v];
		if (tl != tr){
			lazy[2*v] += lazy[v];
			lazy[2*v+1] += lazy[v];
		}
	}
	lazy[v] = 0;
}

void build(int v, int tl, int tr){
	if (tl == tr){
		tree[v] = 0;
		lazy[v] = 0;
	}
	else {
		int tm = (tl + tr)/2;
		build(2*v, tl, tm);
		build(2*v + 1, tm + 1, tr);
		tree[v] = tree[2*v] + tree[2*v+1];
		lazy[v] = 0;
	}
}

int sum(int v, int tl, int tr, int l, int r){
	push(v,tl,tr);
	if (l > r)
		return 0;
	if (l == tl && r == tr)
		return tree[v];
	int tm = (tl + tr)/2;
	return sum(2*v, tl, tm, l, min(r, tm)) + sum(2*v+1, tm+1, tr, max(l, tm+1), r);
}

void update(int v, int tl, int tr, int l, int r, int val){
	push(v,tl,tr);
	if (l > r)
		return;
	if (l == tl && r == tr){
		lazy[v] += val;
		push(v,tl,tr);
	}
	else {
		int tm=(tl+tr)/2;
		update(2*v, tl, tm, l, min(r,tm), val);
		update(2*v+1, tm+1, tr, max(tm+1,l), r, val);
		tree[v] = tree[2*v] + tree[2*v+1];
	}
}


vi head, pos, parent, depth, heavy; // não tem entry pq é com vértice e não  aresta
int cur_pos;

int dfs_hld(int u){
    int size = 1;
    int max_size = 0;

    for (auto v : adj[u]){
        if (v != parent[u]){
            parent[v] = u;
            depth[v] = depth[u]+1;

            int v_size = dfs_hld(v);
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

    if (~heavy[u]){
        hld(heavy[u], h);
    }
    for (auto v: adj[u]){
        if (v != parent[u] && v != heavy[u]){
            hld(v, v);
        }
    }

}

int query_hld(int a, int b){
    int ans = 0;
    for (; head[a] != head[b]; b=parent[head[b]]){
        if (depth[head[a]] > depth[head[b]]) swap(a,b);

        ans += sum(1, 1, n, pos[head[b]], pos[b]);
    }
    if (depth[a] > depth[b]) swap(a,b);
    ans += sum(1, 1, n, pos[a], pos[b]);// aqui não precisa do +1 pq armazena vértice e não aresta

    return ans;
}

void update_hld(int a, int b, int val){
    for (; head[a] != head[b]; b=parent[head[b]]){
        if (depth[head[a]] > depth[head[b]]) swap(a,b);

        update(1, 1, n, pos[head[b]], pos[b], val);
    }
    if (depth[a] > depth[b]) swap(a,b);
    update(1, 1, n, pos[a], pos[b],val);// aqui não precisa do +1 pq armazena vértice e não aresta

}

void init_hld(vvi &adj){
    parent = vi(n); //observe que o parent da raiz é zero por omissão
    depth = vi(n); //QUANTO MAIOR , MAIOR A POSIÇÃO EM BAST[]
    heavy = vi(n, -1);
    head = vi(n);
    pos = vi(n); 
    cur_pos = 0;

    dfs_hld(1);// 1-indexado e raiz 1
    hld(1, 1);//1 é raiz da ávore e head de seu heavy-path;
    build(1, 1, n);
}

int t,u,v,a,b,q;

int main(){_
    cin >> n >> q;
    adj = vvi(n+1);
    for (int i=n; --i;){
        cin >> u >> v;
        adj[u].eb(v);
        adj[v].eb(u);
    }
    ++n;
    init_hld(adj);
    while (q--){
        cin >> u >> v >> a >> b;
        update_hld(u,v,1);
        cout << query_hld(a,b) << endl;
        update_hld(u,v,-1);
    }
    return 0;
}
