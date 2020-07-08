// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Cartas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2456

#include <stdio.h>
 
int v,i=4,ant,k=0;
 
main (){
	scanf("%i",&v);
	ant=v;
	while (i--){
		scanf("%i",&v);
		if (v>ant) k++;
		else k--;
		ant=v;
	}
	if (k==4) printf("C\n");
	else if (k==-4) printf("D\n");
	else printf("N\n");
	return 0;
}
