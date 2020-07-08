// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Cálculo Simples
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1010

#include<stdio.h>

int main(){
	double c,q,p,r;
	scanf("%lf %lf %lf",&c,&q,&p);
	r=q*p;
	scanf("%lf %lf %lf",&c,&q,&p);
	r+=q*p;
	printf("VALOR A PAGAR: R$ %.2lf\n",r);
	return 0;
}
