// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Decoração Natalina
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1761

#include<stdio.h>
#include<math.h>
 
int main(){
    double a,b,c;
    const double pi= 3.141592654;
    while (scanf("%lf %lf %lf",&a,&b,&c)!=EOF){printf("%.2f\n",(((tan((a*pi)/180.0)*b)+c)*5));}
     
    return 0;
}
