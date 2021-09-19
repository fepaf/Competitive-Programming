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

int n, u, v, k, f, q, mask[MAX], vis[MAX], s;
vi g[MAX];

void dfs(int u, int acum){
    vis[u] = 1;
    mask[u] |= acum;
    for (int v : g[u]){
        if (vis[v]==0){
            dfs(v, mask[u]);
        }
    }
}

int main(){_
    cin >> n >> s;
    for (int i=1; i<=n; ++i){
        for (cin >> k; k--;){
            cin >> f;
            mask[i] |= (1<<f);
        }
    }
    for (int i=n; --i;){
        cin >> u >> v;
        g[u].eb(v);
        g[v].eb(u);
    }
    dfs(s, 0);
    for (cin >> q; q--;){
        cin >> u;
        cout << __builtin_popcount(mask[u]) << endl;
    }
    return 0;
}
