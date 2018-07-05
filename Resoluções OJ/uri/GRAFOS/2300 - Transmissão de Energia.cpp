// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Transmissão de Energia
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2300

#include <stdio.h>
#define maxe 100
 
int tam[maxe],pai[maxe];
 
int find(int n){
	if (n!=pai[n]) return (pai[n]=find(pai[n]));
	return pai[n];
}
void join(int u,int v){
	int v1=find(u);
	int v2=find(v);
	int aux;
	
	if (tam[v1]<tam[v2]){
		aux=tam[v1];
		tam[v1]=tam[v2];
		tam[v2]=aux;
	}
	
	pai[v2]=v1;
	tam[v1]+=tam[v2];
}
 
main(){
	int e,l,x,y,t,r,i;
	for(t=1;;t++){
		scanf("%i %i",&e,&l);
		if (!e && !l) break;
		for (i=0;i<e;i++){
			pai[i]=i;
			tam[i]=1;
		}
		while (l--){
			scanf("%i %i",&x,&y);
			x=find(x-1);
			y=find(y-1);
			if (x!=y){
				join(x,y);
				e--;
			}
		}
		printf("Teste %i\n%s\n\n",t,(e-1 ? "falha":"normal"));
	}
	return 0;
}
