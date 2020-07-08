// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Raiz Quadrada de 10
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2161

#include<stdio.h>
#include<math.h>

double n,r5;

double f(int n){return n ? 1.0/(6.0+f(n-1)) : 0.0;}

int main(){
	while (scanf("%lf",&n)!=EOF) printf("%.10lf\n",3+f(n));
	return 0;
}
