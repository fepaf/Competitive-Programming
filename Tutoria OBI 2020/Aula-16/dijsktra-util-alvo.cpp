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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

/*
lista adjacencia
nao direcionado
1 - indexado
*/

int n;
int m;
int s; // origem
int t; // destino
int u, v, w;
vvii adj;
vi dist; // dist[u] guardar menor caminho de S até U
vi ult; // ult[u] diz qual ultimo vértice anterior a U no menor caminho de S até U

int dijkstra(int s, int t){
    dist = vi(n+1,INF);
    ult = vi(n+1,-1);
    priority_queue<ii, vii, greater<ii> > pq; // guarda pares {dist[u], u} = {distancia acumulada, u}


    dist[s] = 0;
    pq.push({dist[s], s});

    while (!pq.empty()){
        ii topo = pq.top(); pq.pop();
        int d = topo.fs, u = topo.sc;

        if (d > dist[u]) continue;

        if (u == t) return dist[t];

        for (auto [v,w] : adj[u]){
            if (dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                ult[v] = u;
                pq.push({dist[v], v});
            }
        }
    }

    return dist[t];
}

void path(int u){ // imprime o menor caminho de S até o vertice U
    if (u == s){
        cout << u;
    }
    else {
        path(ult[u]);
        cout << "->" << u ;
    }
}

int main(){_
    cin >> n >> m;

    adj = vvii(n+1);

    for (int i=0; i<m; ++i){
        cin >> u >> v >> w;
        adj[u].eb(v,w);
        adj[v].eb(u,w);        
    }

    cin >> s >> t;

    cout << dijkstra(s, t) << "\n";

    path(t);
    cout << endl;
    
    return 0;
}
