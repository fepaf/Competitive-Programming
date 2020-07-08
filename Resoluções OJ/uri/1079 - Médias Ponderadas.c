// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Médias Ponderadas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1079

#include<stdio.h>
  
int main(){
    int  n,i;
    double a,b,c;
    scanf("%i",&n);
    for (i=1;i<=n;i++){
        scanf("%lf%lf%lf",&a,&b,&c);
        printf("%.1lf\n",(2*a+3*b+5*c)/10.0);
    }
    return 0;
}
