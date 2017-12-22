// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Feynman
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1323

#include<stdio.h>
int main(){
	int n;
	while (scanf("%i",&n) && n){
		printf("%i\n",n*(n+1)*(2*n+1)/6);
	}
	return 0;
}
