// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Será Isso Integração?
// Nível: 4
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1291

#include<stdio.h>
#include<math.h>
#define r3 sqrt(3)
#define z (1-(r3/4)-(M_PI/6))
#define y ((1-(M_PI/4))-2*z)
#define x (((M_PI/2)-1)-2*y)

int main(){
	double a;	
	while (scanf("%lf",&a)!=EOF){printf("%.3lf %.3lf %.3lf\n",a*a*x,a*a*4*y,a*a*4*z);}
	return 0;	
}

