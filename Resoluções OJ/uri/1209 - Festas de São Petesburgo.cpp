#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define INF 0x3f3f3f3f
#define MAX (1<<10)
#define MOD 1000000007
#define i64 unsigned long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define pi 2*acosl(0.0)
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, m, k, u, v, g[MAX], saiu[MAX];
vvi adj;
string ans;
queue<int> fila;

int main(){_
    while (cin >> n >> m >> k){
        adj = vvi(n+1);
        while (m--){
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
            ++g[u], ++g[v];
        }
        for (int i=1; i<=n; ++i){
            if (g[i]<k){
                fila.push(i);
                saiu[i] = 1;
            }
        }
        while (!fila.empty()){
            u = fila.front(); fila.pop();

            for (int v : adj[u]){
                if (--g[v] < k && !saiu[v]){
                    fila.push(v);
                    saiu[v] = 1;
                }
            }
        }
        ans = "";
        for (int i=1; i<=n; ++i){
            if (!saiu[i]) ans += ' '+to_string(i);
            saiu[i] = g[i] = 0;
        }
        cout << (sz(ans) ? ans.substr(1) : "0") << '\n';
    }
    return 0;
}
