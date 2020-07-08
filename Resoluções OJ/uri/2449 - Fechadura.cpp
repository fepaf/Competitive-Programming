// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fechadura
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2449

#include <stdio.h>
#include <stdlib.h>
 
int pino[1000];
 
main (){
	int n,m,i,dif,res=0;
	scanf("%i %i",&n,&m);
	for (i=0;i<n;i++){
		scanf("%i",&pino[i]);
	}
	for (i=0;i<n-1;i++){
		dif=m-pino[i];
		pino[i]+=dif;
		pino[i+1]+=dif;
		res+=abs(dif);
	}
	printf("%i\n",res);
	return 0;
}
