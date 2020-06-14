#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

int n, m;
int u, v, resp;
queue<int> fila;
vi vis, ans;
vvi adj;

int main(){_
    cin >> n >> m;
    adj = vvi(n+1);
    while (m--){
        cin >> u >> v;
        adj[u].eb(v);
        adj[v].eb(u);
    }
    vis = vi(n+1,0);
    ans = vi(n+1,-1);
    
    vis[1] = 1; fila.push(1);
    while (!fila.empty()){
        u = fila.front(); fila.pop();
        
        for (int v : adj[u]){
            if (!vis[v]){
                ans[v] = u;
                vis[v] = 1;
                fila.push(v);
            }
        }
    }
    resp = 1;
    for (int i=2; i<=n; ++i){
        resp &= (ans[i]!=-1);
    }
    if (!resp){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    for (int i=2; i<=n; ++i){
        cout << ans[i]  << endl;
    }
    return 0;
}