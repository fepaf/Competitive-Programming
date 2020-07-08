// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Troco
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2446

#include <stdio.h>
#define max 100001
 
int pode[max];
 
main(){
	int n,m,i,v;
	
	scanf("%i %i",&n,&m);
	
	pode[0]=1;
	
	while (m--){
		scanf("%i",&v);
		
		for (i=n;i>=v;i--){
			if (pode[i-v])
				pode[i]=1;;
		}
	}	
	
	 printf("%c\n",(pode[n]?'S':'N'));
 
	return 0;
}
 
