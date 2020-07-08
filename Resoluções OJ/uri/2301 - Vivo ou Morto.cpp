// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Vivo ou Morto
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2301

#include<stdio.h>
#define max 100
 
main(){
	int r,p,i,j,k,a,x[max],tam,t,n;
	for (t=1;;t++){
		scanf("%i %i",&p,&r);
		if (!p && !r) break;
		for (i=0;i<p;i++){
			scanf("%i",&x[i]);
		}
		while (r--){
			tam=0;
			scanf("%i %i",&n,&j);
			for (i=0;i<n;i++){
				scanf("%i",&a);
				if (a==j) x[tam++]=x[i];
			}
		}
		printf("Teste %i\n%i\n\n",t,x[0]);
	}
	return 0;
}
