// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: K-ésimo Caminho
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2809

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 unsigned long long
#define INF 0x3f3f3f3f
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<int>
#define vvii vector<vii>
#define eb emplace_back
#define fs first
#define sc second
#define vert(n,k) ((n)*(MAXK+1)+k)
#define MAXK 100
#define DEBUG 0

using namespace std;

vvii adj;
vi dist;
vector< set<int> > edge_path;
int n,m,q,u,v,w,k,d,s,t,out_path,ans;

int main(){_
	cin >> n >> m >> q >> s >> t;
	--s , --t;

	adj = vvii(n*(MAXK+1)); edge_path = vector< set<int> >(n);

	cin >> u; --u;
	do{
		cin >> v; --v;

		edge_path[u].insert(v);

		u = v;
	}while(v != t);

	while (m--){
		cin >> u >> v >> w;
		--u , --v;

		out_path = (!edge_path[u].count(v));

		//if (DEBUG) cout << u+1 << " " << v+1 << "->" << (out_path) <<endl;

		for (int i=0; i<=MAXK-out_path; ++i){
			adj[vert(u,i)].eb(vert(v,i+out_path), w);
		}
	}

	dist = vi(n*(MAXK+1), INF); dist[vert(s,0)] = 0;
	priority_queue< ii, vii , greater<ii> > pq; pq.push(ii(0,vert(s,0)));

	while (!pq.empty()){
		ii topo = pq.top(); pq.pop();
		int d = topo.fs, u = topo.sc;

		if (d > dist[u]) continue;

		for (auto vw : adj[u]){
			int v = vw.fs, w = vw.sc;

			if (dist[u] + w < dist[v]){
				dist[v] = dist[u] + w;
				pq.push(ii(dist[v], v));
			}
		}
	}
	if (DEBUG){
		cout << t << " " << dist[vert(t,0)] << endl;
	}
	while (q--){
		cin >> k >> d;
		ans = 0;
		if (DEBUG) cout << dist[vert(t,k)] << endl;
		for (int i=k; i<=MAXK; ++i){
			ans |= (abs(dist[vert(t,0)] - dist[vert(t,i)]) <= d);
		}
		cout << (ans ? "SIM" : "NAO") << endl;
	}

	return 0;
}

