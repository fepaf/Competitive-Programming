#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define OUT MAX
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define int i64
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define rep(i,a,b) for (int (i)=(a); (i)<=(b); ++(i))
#define repi(i,a,b) for (int (i)=(a); (i)>=(b); --(i))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;


i64 n, m, u, v, x, y, timer, a[MAX], q, op;
i64 pos[MAX], pai[MAX], h[MAX];
i64 val[MAX], tam[MAX];
i64 st[MAX];
vi g[MAX];

void build(int u, int i, int j){
    if (i==j){
        st[u] = a[i];
        return;
    }
    int md = ((i+j)>>1);
    build(esq(u), i, md);
    build(dir(u), md+1, j);
    st[u] = (st[esq(u)]|st[dir(u)]);
}

int query(int u, int i, int j, int l, int r){
    if (j<l || r<i){
        return 0;
    }
    if (l<=i && j<=r){
        return st[u];
    }
    int md = (i+j)>>1;
    int anse = query(esq(u), i, md, l, r);
    int ansd = query(dir(u), md+1, j, l, r);
    return (anse|ansd);
}

void update(int u, int i, int j, int idx, int x){
    if (i==j){
        st[u] = a[i] = (1LL<<x);
        return;
    }
    int md = (i+j)>>1;
    if (idx <= md) update(esq(u), i, md, idx, x);
    else update(dir(u), md+1, j, idx, x);
    st[u] = (st[esq(u)]|st[dir(u)]);
}

void dfs(int u, int p=-1){
    tam[u] = 1;
    for (int &v : g[u]){
        if (v != p){
            dfs(v, u);
            tam[u] += tam[v];
            if (tam[v] > tam[g[u][0]]) swap(v, g[u][0]);
        }
    }
}

void build_hld(int u, int p=-1){
    pos[u] = ++timer;
    a[pos[u]] = val[u];
    for (int v : g[u]){
        if (v != p){
            pai[v] = u;
            h[v] = (v == g[u][0] ? h[u] : v);
            build_hld(v, u);
        }
    }
}

int query_path(int a, int b){
    int ans = 0;
    for (; h[a]!=h[b]; a=pai[h[a]]){
        if (pos[a] < pos[b]) swap(a, b);
        ans |= query(1, 1, n, pos[h[a]], pos[a]);
    }
    if (pos[a] < pos[b]) swap(a, b);
    ans |= query(1, 1, n, pos[b], pos[a]);
    return ans;
}

void update_path(int u, int x){
    update(1, 1, n, pos[u], x);
}

void init_hld(int root = 0){
    dfs(root);
    timer = 0;
    h[root] = root;
    build_hld(root);
    build(1, 1, n);
}

signed main(){_
    cin >> n;
    rep(i, 1, n){
        cin >> val[i];
        val[i] = (1LL<<val[i]);
    }
    rep(i,1,n-1){
        cin >> u >> v;
        g[u].eb(v);
        g[v].eb(u);
    }   
    init_hld(1);
    cin >> q;
    while(q--){
        cin >> op >> x >> y;
        if (op==1){
            update_path(x, y);
        } else {
            cout << __builtin_popcountll(query_path(x, y)) << endl;
        }
    }
    return 0;
}