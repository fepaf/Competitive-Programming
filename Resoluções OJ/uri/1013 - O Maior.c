// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Maior
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1013

#include<stdio.h>
 
int main(){
    int a,b,c;
    scanf("%i  %i %i",&a,&b,&c);
    if (a>b && a>c) printf("%i eh o maior\n",a);
    else if (b>a && b>c) printf("%i eh o maior\n",b);
    else printf("%i eh o maior\n",c);
     
    return 0;
}
