// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Não Posso me Atrasar
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1977

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define MAXV 12 
#define INF 1000000000

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef	vector<int> vi;

map <string, int> rota;
vii adj[MAXV];
vi dist,num;
int x,n,v,t,ind,a,b,ans;
string o,d;

int dkt(int s, int t){
	priority_queue <ii,  vector<ii>, greater<ii> > pq;
	dist.assign(v+1,INF);
	pq.push(make_pair(0,s)), dist[s]=0;
	while (!pq.empty()){
		ii front=pq.top(); pq.pop();
		int d=front.first, u=front.second;
		if (d>dist[u]) continue;
		if (u==t) return dist[t];
		for (int i=0; i<adj[u].size(); i++){
			int v=adj[u][i].first, w=adj[u][i].second;
			if (dist[u]+w<dist[v]){
				dist[v]=dist[u]+w;
				pq.push(make_pair(dist[v],v));
			}	
		}
	}
	return dist[t];
}

int main(){_
	while ((cin>>x>>n>>v)&&(x||n||v)){
		ind=1;
		while (n--){
			cin>>o>>d>>t;
			a=(rota[o] ? rota[o] : rota[o]=(ind++));
			b=(rota[d] ? rota[d] : rota[d]=(ind++));
			adj[a].push_back(make_pair(b,t));
		}
		ans=dkt(rota["varzea"],rota["alto"])+(x<=30 ? 30 : 50);
		cout<<((17+(ans/60))%24)<<":"<<fixed<<setw(2)<<setfill('0')<<(ans%60)<<endl<<(ans>60 ? "Ira se atrasar" : "Nao ira se atrasar")<<endl;
		for (int i=v+1;i--;) adj[i].clear();
		rota.clear();
	}
	return 0;
}
