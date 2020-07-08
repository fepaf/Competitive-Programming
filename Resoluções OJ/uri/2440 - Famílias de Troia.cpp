// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Famílias de Troia
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2440

#include <stdio.h>
 
int tam[50000],pai[50000];
 
int find(int n){
	if (pai[n]!=n) pai[n]=find(pai[n]);
	return pai[n];
}
 
void join (int a, int b){
	int aux;
	a=find(a);
	b=find(b);
	if (tam[a]<tam[b]){
		aux=a;
		a=b;
		b=aux;
	}
	pai[b]=a;
	tam[a]+=tam[b];
}
 
main (){
	int qf,n,m,x,y,i;
	scanf("%i %i",&n,&m);
	for (i=0;i<n;i++){
		pai[i]=i;
		tam[i]=1;
	}
	qf=n;
	while (m--){
		scanf("%i %i",&x,&y);
		x=find(x-1);
		y=find(y-1);
		if (x==y) continue;
		join(x,y);
		qf--;
	}
	printf("%i\n",qf);
	return 0;
}
