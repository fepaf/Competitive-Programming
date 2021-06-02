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
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, m, t[MAX], pos[MAX], cod;
vi adj[MAX];
vi vis;

struct plano{
    plano (){}
    // plano(int u, int l, int r): u{u}, l{l}, r{r} {}
    int u, l, r;
} planos[MAX];

void build(int u, int i, int j){
    if (i == j){
        pos[u] = ++cod;
        adj[pos[u]].eb(i);
        return ;
    }
    int md = (i+j)>>1;
    build(esq(u), i, md);
    build(dir(u), md+1, j);

    pos[u] = ++cod;

    adj[pos[u]].eb(pos[esq(u)]);
    adj[pos[u]].eb(pos[dir(u)]);
}

void add_edge(int u, int i, int j, int no, int l, int r){
    if (j < l || r < i){
        return;
    }
    if (l <= i && j <= r){
        adj[no].eb(pos[u]);
        return;
    }
    int md = (i+j)>>1;
    add_edge(esq(u), i, md, no, l, r);
    add_edge(dir(u), md+1, j, no, l, r);
}

int dfs(int u){
    vis[u] = 1;

    for (int v : adj[u]){
        if (!vis[v] && dfs(v)){
            return 1;
        } else if (vis[v]==1){
            return 1;
        }
    }

    vis[u] = 2;

    return 0;
}

int f(int idx){
    for (int i=n+1; i--;){
        adj[i].clear();
    }

    for (int i=0; i<=idx; ++i){
        add_edge(1, 1, n, planos[i].u,  planos[i].l, planos[i].r);
    }

    vis = vi(cod+1, 0);
    for (int i=1; i<=n; ++i){
        if (!vis[i] && dfs(i)) return 1;
    }

    return 0;
}

int u, l, r, lo, hi, md;

int main(){_
    cin >> n >> m;
    for (int i=0; i<m; ++i){
        cin >> planos[i].u >> planos[i].l >> planos[i].r;
    }
    cod = n;
    build(1, 1, n);
    lo = 0, hi = m-1;
    while (lo < hi){
        md = lo + ((hi-lo)>>1);
        if (f(md)) hi = md;
        else lo = md+1;
    }
    cout << (f(lo) ? lo+1 : -1) << endl;
    return 0;
}
