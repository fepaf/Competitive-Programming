// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Salário com Bônus
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1009

#include<stdio.h>

int main(){
	char nome[101];
	double sf,v;
	scanf("%s %lf %lf",nome,&sf,&v);
	printf("TOTAL = R$ %.2lf\n",sf+0.15*v);
	return 0;
}
