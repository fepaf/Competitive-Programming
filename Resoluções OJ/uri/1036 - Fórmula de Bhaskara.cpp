// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fórmula de Bhaskara
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1036

#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,d;
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if (d>=0 && a) printf("R1 = %.5lf\nR2 = %.5lf\n",(-b+sqrt(d))/2/a,(-b-sqrt(d))/2/a);
	else printf("Impossivel calcular\n");
    return 0;
}
