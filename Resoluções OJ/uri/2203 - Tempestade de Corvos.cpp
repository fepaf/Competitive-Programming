// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tempestade de Corvos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2203

#include<stdio.h>
#include<math.h>

double r1,r2,xf,yf,xi,yi,vi;

int main(){
	while (scanf("%lf %lf %lf %lf %lf %lf %lf",&xf,&yf,&xi,&yi,&vi,&r1,&r2)!=EOF) printf("%c\n",(sqrt((xf-xi)*(xf-xi)+(yf-yi)*(yf-yi))+1.5*vi<=r1+r2 ? 'Y' : 'N'));
	return 0;
}
