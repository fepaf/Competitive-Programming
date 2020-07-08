// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Cortando Canos
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1798

#include<stdio.h>
 
int c[1000],v[1000],pd[2001];
 
int main(){
    int n,t,i,j,k;
 
    scanf("%i %i",&n,&t);
 
    for (i=n;i--;){
        scanf("%i%i",&c[i],&v[i]);
        for (j=c[i];j<=t;j++) if (pd[j-c[i]]+v[i]>pd[j]) pd[j]=pd[j-c[i]]+v[i];
    }
    printf("%i\n",pd[t]);
    return 0;
}
