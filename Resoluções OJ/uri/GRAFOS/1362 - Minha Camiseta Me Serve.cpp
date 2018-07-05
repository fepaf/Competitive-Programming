// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Minha Camiseta Me Serve
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1362

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
#define pb push_back
#define mp make_pair

using namespace std;

vvi adj;
vi ant, vis;
map< ii, int> edge;
map<string, int> vt;
int n,m,caso,font,sorv;
string tam;

int find_path(int o, int d){
 	 queue <int> fila;
	 vis = vi(m+9,UNVISITED);
	 fila.push(o); vis[o]=VISITED;
	 while (!fila.empty()){
		 int u=fila.front(); fila.pop();
		 if (u==d) return 1;
		 for (auto v : adj[u]){
			 if (vis[v]==UNVISITED && edge[ii(u,v)]){
				 fila.push(v); vis[v]=VISITED; ant[v]=u;
			 }
		 }
	 }
	 return 0;
}

int find_flow(int o, int d){
	int flow=edge[ii(ant[d],d)];
	for (int u=d; u!=o; u=ant[u]){
		flow=min(flow,edge[ii(ant[u],u)]);
	}
	for (int u=d; u!=o; u=ant[u]){
		edge[ii(ant[u],u)]-=flow;
		edge[ii(u,ant[u])]+=flow;
	}
	return flow;
}

int find_maxflow(int o, int d){
	int max_flow=0;
	while (find_path(o,d)){
		max_flow+=find_flow(o,d);
	}
	return max_flow;
}

void add_edge(int u, int v,int w){
	adj[u].pb(v);
	edge[ii(u,v)]=w;
	adj[v].pb(u);
	edge[ii(v,u)]=0;
}

int main(){_
	vt["XXL"]=0;
	vt["XL"]=1;
	vt["L"]=2;
	vt["M"]=3;
	vt["S"]=4;
	vt["XS"]=5;

	for (cin>>caso; caso--;){
		cin>>n>>m;
		ant = vi(m+9,-1), adj = vvi(m+9), font=m+6, sorv=m+7;
		for (int i=6; i--;) {
			add_edge(font,i,n/6);
		}
		for (int i=6; i<m+6; i++){
			add_edge(i,sorv,1);
			cin>>tam;
			add_edge(vt[tam],i,1);
			cin>>tam;
			add_edge(vt[tam],i,1);
		}
		cout<<(find_maxflow(font,sorv)==m ? "YES" : "NO")<<endl;
        edge.clear();
	}
    return 0;
}

