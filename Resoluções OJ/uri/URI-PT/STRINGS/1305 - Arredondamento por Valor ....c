// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Arredondamento por Valor ...
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1305

#include <stdio.h>
 
int main(){
    double num,frac,cut,i,j;
    int r,n;
    while (scanf("%lf %lf",&num,&cut)!=EOF){
        n=num;
        printf("%i\n",n+(num-cut>=n));
    }
    return 0;
}
