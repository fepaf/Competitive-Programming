// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sedex Marciano
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2382

#include <stdio.h>
 
int l,a,p,r;
 
main (){
	scanf("%i %i %i %i",&l,&a,&p,&r);
	if (l*l+a*a+p*p>4*r*r) printf("N\n");
	else printf("S\n");
	return 0;
}
 
