// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Carnaval
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2418

#include<stdio.h>
 
int i=5;
float ma=4,me=11,s=0,n;
 
main (){
	while (i--){
		scanf("%f",&n);
		ma = (n>ma ? n:ma);
		me = (n<me ? n:me);
		s+=n;
	}
	printf("%.1f\n",s-ma-me);
	return 0;
}
