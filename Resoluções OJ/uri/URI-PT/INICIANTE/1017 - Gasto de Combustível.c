// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Gasto de Combustível
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1017

#include<stdio.h>

int main(){
	double t,v;
	scanf("%lf %lf",&t,&v);
	printf("%.3lf\n",t*v/12.0);
	return 0;
}
