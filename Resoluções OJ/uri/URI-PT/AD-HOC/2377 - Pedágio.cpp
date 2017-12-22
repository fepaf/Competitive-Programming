// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pedágio
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2377

#include <stdio.h>
 
int l,d,k,p;
 
main (){
	scanf("%i %i %i %i",&l,&d,&k,&p);
	printf("%i\n",((l*k)+(l/d)*p));
	return 0;
}
 
