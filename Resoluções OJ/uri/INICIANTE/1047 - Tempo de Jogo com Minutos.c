// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tempo de Jogo com Minutos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1047

#include<stdio.h>

int main(){
	int a,b,c,d,r;
	scanf("%i %i %i %i",&a,&b,&c,&d);
	r=(((c-a)*60+d-b)+1440)%1440;
	printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",r/60,r%60);
	return 0;
}
