// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Número Aproximado de Primos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2159

#include<stdio.h>
#include<math.h>

double n,f;

int main(){
	while (scanf("%lf",&n)!=EOF) printf("%.1lf %.1lf\n",n/log(n) , 1.25506*(n/log(n)) );
	return 0;
}
