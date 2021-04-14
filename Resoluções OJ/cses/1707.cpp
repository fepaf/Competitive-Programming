#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF (0x3f3f3f3f)
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii antr<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Graph Girth
Link: https://cses.fi/problemset/task/1157
*/

int n, m, u, v;
vi dist, ant;
vvi adj;
queue<int> fila;

int bfs(int s){
    dist = vi(n+1, INF);
    ant = vi(n+1, -1);
    dist[s] = 0;
    fila.push(s);
    int ans = INF;
    while (!fila.empty()){
        int u = fila.front(); fila.pop();
        for (int v : adj[u]){
            if (dist[v] == INF){
                dist[v] = dist[u]+1;
                ant[v] = u;
                fila.push(v);
            } else if (v != ant[u]){
                ans = min(ans, dist[u]+dist[v]+1);
            }
        }
    }
    return ans;
}

int main(){_
    cin >> n >> m;
    adj = vvi(n+1);
    while (m--){
        cin >> u >> v;
        adj[u].eb(v);
        adj[v].eb(u);
    }
    int ans = INF;
    for (int i=1; i<=n; ++i){
        ans = min(ans, bfs(i));
    }
    cout << (ans == INF ? -1 : ans) << endl;
    return 0;     
}
