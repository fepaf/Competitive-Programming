// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Campo de Minhocas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2293

#include<stdio.h>
#include<string.h>
 
int p,prod[200],i,j,n,m,maior=0;
 
main (){
	memset(prod,0,sizeof(prod));
	
	scanf("%i %i",&n,&m);
	
	for (i=0;i<n;i++){
		for (j=0;j<m;j++){
			scanf("%i",&p);
			prod[i]+=p;
			prod[n+j]+=p;
			if (prod[i]>maior) maior=prod[i];
			if (prod[n+j]>maior) maior=prod[n+j];
		}
	}
	
	printf("%i\n",maior);
	
	return 0;
}
