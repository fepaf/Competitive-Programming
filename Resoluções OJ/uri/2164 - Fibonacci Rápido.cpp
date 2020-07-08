// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fibonacci Rápido
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2164

#include<stdio.h>
#include<math.h>

double n,r5;

int main(){
	r5=sqrt(5);
	while (scanf("%lf",&n)!=EOF) printf("%.1lf\n", ( pow((1.0+r5)/2.0, n) - pow((1.0-r5)/2.0, n) )/r5 );
	return 0;
}
