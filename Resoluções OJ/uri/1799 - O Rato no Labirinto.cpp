// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Rato no Labirinto
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1799

#include<bits/stdc++.h>
#define maxn 4123
#define inf 1000000007

using namespace std;

map <string,int> vert;
map <string,int>::iterator it;
vector <int> adj[maxn];
int n,m,cont,dist[maxn],vis[maxn],s,r=1;
string c,d;
char a[101],b[101];

void dijkstra(int vi,int tam){
	priority_queue < pair< int,int > > pq;
	
	for (int i=n;i--;) dist[i]=inf, vis[i]=0;
	
	dist[vi]=0;
	
	pq.push(make_pair(0,vi));
	
	while (1){
		int v=-1;
		
		while (!pq.empty() && (v<0 || vis[v])) v=pq.top().second, pq.pop();
		
		if (v<0 || dist[v]==inf) break;
		
		vis[v]=1;
		
		int t=adj[v].size();
		for (int i=0;i<t;i++){
			int u=adj[v][i];
			if (dist[v]+1<dist[u]){
				dist[u]=dist[v]+1;
				pq.push(make_pair(-dist[u],u));
			}
		}
	}
}
	
int main(){
	
	cin>>n>>m;
	
	for (int i=m;i--;){
		cin>>c>>d;
		if (vert.find(c)==vert.end()) vert[c]=(cont++);
		if (vert.find(d)==vert.end()) vert[d]=(cont++);
		adj[vert[c]].push_back(vert[d]);
		adj[vert[d]].push_back(vert[c]);
	}
	
	dijkstra(vert["Entrada"],n);
	r=dist[vert["*"]];
	dijkstra(vert["*"],n);
	r+=dist[vert["Saida"]];
	cout<<r<<endl;
	
	return 0;
}


