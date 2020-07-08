// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tacógrafo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2388

#include<stdio.h>
 
int n,t,v,d=0;
 
main (){
	scanf ("%i",&n);
	while (n--){
		scanf("%i %i",&t,&v);
		d+=(t*v);
	}
	printf("%i\n",d);
	return 0;
}
