#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second


using namespace std;

/*
recebe grafo simples
não direcionado
calcula a distância de todos os vértices ao Vértice S e retorna -1 se o vértice não for alcançável por S
*/

int n;// quantidade de vértices
int m; // quantidade de arestas
int u , v, w; // aresta U -> V com peso W
int s, t;// S:origem, T:destino
vvii adj; // lista de adjacências para um grafo ponderado
vi dist;

int dijkstra(int s, int t){
    dist = vi(n+1,INF);
    priority_queue<ii, vector<ii>, greater<ii> > pq;

    dist[s] = 0; pq.push(ii(0,s));

    while (!pq.empty()){
        ii topo = pq.top(); pq.pop();
        int d = topo.fs, u = topo.sc;

        if (d > dist[u]) continue;

        if (u == t) return dist[u];// otimização. Não é necessário.

        for (auto vw : adj[u]){
            int v = vw.fs, w = vw.sc;

            if (dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push(ii(dist[v], v));
            }
        }
    }

    return dist[t] == INF ? -1 : dist[t] ;
}

int main(){_
    while (cin >> n >> m){
        adj = vvii(n+1);

        while (m--){
            cin >> u >> v >> w;
            adj[u].eb(v,w);
            adj[v].eb(u,w); // porque não é direcionado
        }

        cin >> s >> t; // É pedido a distância de S a T

        cout << dijkstra(s,t) << endl;
    }

    return 0;
}
