// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Cédulas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1018

#include<stdio.h>

int main(){
	int v,n[7]={100,50,20,10,5,2,1},r[7];
	scanf("%i",&v);
	printf("%i\n%i nota(s) de R$ 100,00\n",v,v/100);
	r[0]=v%100;
	for (int i=1;i<7;i++){
		printf("%i nota(s) de R$ %i,00\n",r[i-1]/n[i],n[i]);
		r[i]=r[i-1]%n[i];
	}
	
	return 0;
}
