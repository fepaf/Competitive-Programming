// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Promessa de Campanha
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1835

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

typedef vector<int> vi;

vi pai, tam;

int id(int n){return (pai[n]==n ? pai[n] : pai[n]=id(pai[n]));}

void join(int u, int v){
	u=id(u) , v=id(v);
	if (u==v) return;
	if (tam[u]<tam[v]) swap(u,v);
	pai[v]=u, tam[u]+=tam[v];
}

void init(int n){
	pai.clear(), tam.clear();
	for (int i=0;i<n;i++) pai.push_back(i);
	tam.assign(n,1);
}

int t,n,m,x,y,caso,ans;

int main(){_
	cin>>t;
	while (t--){
		cin>>n>>m;
		init(n+1);
		ans=n-1;
		for (int i=m;i--;){
			cin>>x>>y;
			ans-=(id(x)!=id(y));
			join(x,y);
		}
		cout<<"Caso #"<<++caso;
		if (!ans) cout<<": a promessa foi cumprida"<<endl;
		else cout<<": ainda falta(m) "<<ans<<" estrada(s)"<<endl;
	}
	return 0;
}
