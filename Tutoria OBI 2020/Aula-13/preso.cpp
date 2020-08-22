#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

int n, m, u, v, c;
vvi adj, owm;
vi k, open, vis, can;

int bfs(int s){
    int cnt = 0;
    queue<int> fila;
    open = vi(n+1,0); // JA FOI ABERTO
    vis = vi(n+1,0); // 0 - n visitado, 1 - visitado e n aberto, 2 - visitado e aberto
    can = vi(n+1, 0);// POSSUO A CHAVE DELE

    fila.push(s);
    vis[s] = 2;
    can[s] = 1;
    while (!fila.empty()){
        int u = fila.front(); fila.pop();

        ++cnt;

        for (int v : owm[u]){
            can[v] = 1;
            if (vis[v] == 1){
                fila.push(v);
                vis[v] = 2;
            }
        }
        for (int v : adj[u]){
            if (!vis[v]){
                if (can[v]){
                    fila.push(v);
                    vis[v] = 2;
                } else{
                    vis[v] = 1;
                }
            }
        }
    }
    return cnt;
}

int main(){_
    while (cin >> n >> m){
        adj = vvi(n+1);
        owm = vvi(n+1);
        k = vi(n+1);
        while (m--){
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        for (int i=2; i<=n; ++i){
            cin >> k[i];
            owm[k[i]].eb(i);
        }
        cout << (bfs(1)==n ? "sim\n" : "nao\n");
    }
}
