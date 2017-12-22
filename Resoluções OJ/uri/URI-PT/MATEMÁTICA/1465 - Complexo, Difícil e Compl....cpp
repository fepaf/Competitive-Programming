// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Complexo, Difícil e Compl...
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1465

#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b,m;
	scanf("%i",&m);
	while (m--){
		scanf("%i %i",&a,&b);
		if (!b) printf("1\n");
		else if (!a) printf("2\n");
		else if (abs(a)==abs(b)) printf("4\n");
		else printf("TOO COMPLICATED\n");
	}
	return 0;
}
