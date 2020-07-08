// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Área
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1012

#include<stdio.h>

int main(){
	double a,b,c,pi=3.14159;
	scanf("%lf %lf %lf",&a,&b,&c);
	
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",a*c/2.0,c*c*pi,(a+b)*c/2.0,b*b,a*b);
	return 0;
}
