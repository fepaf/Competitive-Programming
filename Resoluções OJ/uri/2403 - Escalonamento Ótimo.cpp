// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Escalonamento Ótimo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2403

#include<iostream>
#include<set>
#include<cstdio>
#include<queue>
#define maxn 50000
#define maxm 200000
 
using namespace std;
 
set<int> adj[maxn],conj;
set<int>::iterator it;
int saida[maxn],grau[maxn];
 
main(){
	int i,j,ns,n,m,s,a,b;
	
	scanf("%i %i",&n,&m);
	
	while (m--){
		scanf("%i %i",&a,&b);
		adj[a].insert(b);
		grau[b]++;
	}
	
	for (i=0;i<n;i++)
		if (!grau[i])
			conj.insert(i);
	
	ns=0;			
	while(!conj.empty()){
		i=(*conj.begin());
		conj.erase(conj.begin());
		saida[ns++]=i;
		
		for (it=adj[i].begin();it!=adj[i].end();it++)
			if (!(--grau[*it]))
				conj.insert(*it);
	}
	
	if (ns<n){
		printf("*\n");
	}
	else{
		for (i=0;i<ns;i++){
			printf("%i\n",saida[i]);
		}
	}
	
	return 0;
}
