// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Cidade Proibida
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2528

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 2000000123
#define MAX 2002
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back
#define mp make_pair

using namespace std;


vii art;
vvi adj;
vi dist;
int n,m,a,b,c,r,e,u,v;

int bfs(int s, int t){
	dist = vi(n+1,UNVISITED);
	qi fila;
	fila.push(s), dist[s]=0;
	while (!fila.empty()){
		u=fila.front(); fila.pop();
		if (u==t) return dist[t];
		for (auto v : adj[u]){
			if (dist[v]==UNVISITED){
				dist[v]=dist[u]+1;
				fila.push(v);
			}
		}
	}
}

int main(){_
		while (cin>>n>>m){
			adj = vvi(n+1) , art = vii(m+1);
			for (int i=m;i--;){
				cin>>art[i].fs>>art[i].sc;
			}
			cin>>c>>r>>e;
			for (int i=m;i--;){
				u=art[i].fs , v=art[i].sc;
				if (u!=e && v!=e){
					adj[u].pb(v);
					adj[v].pb(u);
				}
			}
			cout<<bfs(c,r)<<endl;
		}
    return 0;
}

