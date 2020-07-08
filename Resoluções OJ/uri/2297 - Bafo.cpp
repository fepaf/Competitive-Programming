// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bafo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2297

#include<stdio.h>
 
main(){
	int r,a,b,ta,tb,t;
	for (t=1;;t++){
		ta=tb=0;
		scanf("%i",&r);
		if (!r) break;
		while (r--){
			scanf("%i %i",&a,&b);
			ta+=a;
			tb+=b;
		}
		printf("Teste %i\n%s\n\n",t,((ta>tb)?"Aldo":"Beto"));
	}
	return 0;
}
