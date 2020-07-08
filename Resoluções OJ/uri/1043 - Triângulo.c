// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Triângulo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1043

#include<stdio.h>

int main(){
	double a,b,c;
	scanf("%lf%lf%lf",&a,&b,&c);
	if ((a<b+c)&&(b<a+c)&&(c<b+a)) printf("Perimetro = %.1lf\n",a+b+c);
	else printf("Area = %.1lf\n",(a+b)*c/2.0);
	return 0;
}
