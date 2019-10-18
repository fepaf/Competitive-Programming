// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Quase Menor Caminho
// Nível: 
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1392

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0X3f3f3f
#define MAX 100003
#define EPS (1e-9)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define eb emplace_back

using namespace std;

int n, m;
int adj[1<<9][1<<9];
int u, v, w;
int s, d;
vi to[1<<9];

int dijkstra(int s, int t){
	priority_queue<ii, vii, greater<ii> > pq;
	vi dist = vi(n+1, INF);

	dist[s] = 0; pq.push(ii(0,s));

	while (!pq.empty()){
		ii topo = pq.top(); pq.pop();
		int d = topo.fs, u = topo.sc;

		if (d > dist[u]) continue;

		if (u == t) return dist[t];

		for (int v = 0; v<n; ++v){
			int w = adj[u][v];

			if (w == INF) continue;

			if (dist[u] + w < dist[v]){
				dist[v] = dist[u] + w;
				pq.push(ii(dist[v], v));
				to[v].clear();
				to[v].eb(u);
			}
			else if (dist[u] + w == dist[v]){
				to[v].eb(u);
			}
		}
	}

	return dist[t];
}

void libera(int u){
	for (auto v : to[u]){
		adj[v][u] = INF;
		libera(v);
	}
}

int main(){_
	while ((cin >> n >> m) && (n || m)){
		
		cin >> s >> d;

		for (int i=n; i--;){
			for (int j=n; j--;){
				adj[i][j] = INF;
			}
			to[i].clear();
		}

		while (m--){
			cin >> u >> v >> w;
			adj[u][v] = w;
		}
		
		int ans = dijkstra(s, d);
		if (ans == INF){
			cout << (-1) << endl;
		}
		else {
			libera(d);
			ans = dijkstra(s, d);
			cout << (ans != INF ? ans : -1) << endl;
		}

	}
	return 0;
}
