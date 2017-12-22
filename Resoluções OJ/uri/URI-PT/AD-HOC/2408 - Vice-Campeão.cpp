// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Vice-Campeão
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2408

#include <stdio.h>
 
main (){
	int a,b,c;
	scanf("%i %i %i",&a,&b,&c);
	if (((b<a)&(a<c))||((c<a)&&(a<b))) printf("%i\n",a);
	else if (((a<b)&(b<c))||((c<b)&&(b<a))) printf("%i\n",b);
	else printf("%i\n",c);
	
	return 0;
}
