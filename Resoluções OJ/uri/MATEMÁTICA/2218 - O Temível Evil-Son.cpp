// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Temível Evil-Son
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2218

#include<stdio.h>

int n,t;

int main(){
	scanf("%i",&t);
	while (t--){
		scanf("%i",&n);
		printf("%i\n",(n*(n+1))/2 +1);
	}
	return 0;
}
