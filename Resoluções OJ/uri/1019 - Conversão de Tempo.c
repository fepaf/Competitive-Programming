// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Conversão de Tempo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1019

#include<stdio.h>

int main(){
	int h,m,s,t;
	scanf("%i",&t);
	printf("%i:%i:%i\n",t/3600,(t%3600)/60,(t%3600)%60);
	return 0;
}
