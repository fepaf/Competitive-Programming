// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Conta de Água
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2369

#include <stdio.h>
 
main(){
	int n,r;
	scanf("%i",&n);
	if (n<=10) r=7;
	if (10<n && n<=30) r=7+(n-10);
	if (30<n && n<=100) r=27+2*(n-30);
	if (100<n) r=167+5*(n-100);
	printf("%i\n",r);
	return 0;
}
 
