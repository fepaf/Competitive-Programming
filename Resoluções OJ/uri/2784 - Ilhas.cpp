// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ilhas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2784

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define i64 long long
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define vvii vector<vii>
#define fs first
#define sc second
#define eb emplace_back
#define DEBUG 0

using namespace std;

vvii adj;
vi dist;
int n,m,u,v,w,s,menor, maior;

void dijkstra(int s){
    dist = vi(n+1,INF); dist[s]=0;
    priority_queue<ii, vii, greater<ii> > pq; pq.push({0,s});

    while (!pq.empty()){
        ii topo = pq.top(); pq.pop();
        int d = topo.fs, u = topo.sc;

        if (d > dist[u]) continue;

        for (auto vw : adj[u]){
            v = vw.fs, w = vw.sc;

            if (dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                pq.push({dist[v],v});
            }
        }
    }
}

int main(){_
    while (cin >> n >> m){
        adj = vvii(n+1);
        while (m--){
            cin >> u >> v >> w;
            adj[u].eb(v,w);
            adj[v].eb(u,w);
        }
        cin >> s;
        dijkstra(s);
        maior = -INF , menor = INF;
        for (int u = 1; u <= n; u++){
            if (u == s) continue;
            menor = min(menor, dist[u]);
            maior = max(maior, dist[u]);
        }
        cout << maior-menor << endl;
    }
    return 0;
}

