#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

using namespace std;

int n, m, a, b, timer;
vvi adj;
vi vis, tin, low;
char ans;

void dfs(int u, int p){
    vis[u] = 1;
    tin[u] = low[u] = timer++;
    for (int v : adj[u]){
        if (v == p) continue;
        if (vis[v]){
            low[u] = min(low[u], tin[v]);
        }else{
            dfs(v, u);
            low[u] = min(low[u], low[v]);
            if (tin[u] < low[v]){ // é ponte
                ans = 'N';
            }
        }
    }
}


int main(){_
    while ((cin >> n >> m) && (n || m)){
        adj = vvi(n+1);
        while (m--){
            cin >> a >> b;
            adj[a].eb(b);
            adj[b].eb(a);
        }
        
        vis = vi(n+1, 0);
        tin = vi(n+1, -1);
        low = vi(n+1, -1);
        ans = 'S';
        timer = 0;
        for (int u=1; u<=n; ++u){
            if (!vis[u]){
                dfs(u, -1);
            }
        }
        cout << ans << endl;
    }
    cout << endl;
    return 0;
}