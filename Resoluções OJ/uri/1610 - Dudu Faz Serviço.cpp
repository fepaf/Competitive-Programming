// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Dudu Faz Serviço
// Nível: 2
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1610

#include<iostream>
#include<queue>
#include<set>
#include<cstdio>
#include<cstring>
#define max 10000

using namespace std;

int t,m,a,b,n,ns,tam,graue[max];
set <int> adj[max];
set <int>::iterator it;
queue <int> fila;

int main(){
	int i,ant;
	
	scanf("%i",&t);
	
	while (t--){
		scanf("%i %i",&n,&m);
		
		memset(graue,0,sizeof(graue));
		for (i=0;i<n;i++) adj[i].clear();
		ns=0;
		
		while (m--){
			scanf("%i %i",&a,&b);
			a-- , b--;
			tam=adj[b].size();
			adj[b].insert(a);
			if (tam!=adj[b].size()) graue[a]++;
		}
		
		for (i=0;i<n;i++) if (!graue[i]) fila.push(i);
		
		while (!fila.empty()){
			a=fila.front();
			fila.pop();
			ns++;
			for (it=adj[a].begin();it!=adj[a].end();it++){
				if (!(--graue[*it])) fila.push(*it);
			}
		}
		
		printf("%s\n",(ns<n ? "SIM":"NAO"));
	}
	
	return 0;
}
