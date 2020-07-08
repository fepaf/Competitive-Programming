// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Torres de Hanói
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2251

#include<stdio.h>
#include<math.h>
main(){
	int n,t;
	for (t=1;;t++){
		scanf("%i",&n);
		if (!n) break;
		n=(1<<n)-1;
		printf("Teste %i\n%i\n\n",t,n);
	}
	return 0;
}



