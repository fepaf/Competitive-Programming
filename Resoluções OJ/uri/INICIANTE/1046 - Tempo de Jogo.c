// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tempo de Jogo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1046

#include<stdio.h>

int main(){
	int a,b;
	scanf("%i %i",&a,&b);
	printf("O JOGO DUROU %i HORA(S)\n",((b-a)+24)%24);
	return 0;
}
