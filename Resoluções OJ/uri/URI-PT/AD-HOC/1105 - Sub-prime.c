// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sub-prime
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1105

#include<stdio.h>
#define zerar(n) for (i=n;i--;) dev[i]=cred[i]=0;
 
int dev[20],cred[20],d,v,b,n,i,r,c;
 
int main(){
 
    while (scanf("%i %i",&b,&n) && (b||n)){
        for (i=0;i<b;i++) scanf("%i",&cred[i]);
 
        while (n--){
            scanf("%i %i %i",&d,&c,&v);
            dev[d-1]+=v;
            cred[c-1]+=v;
        }
 
        r=1;
        for (i=0;i<b;i++) r*=(cred[i]-dev[i]>=0);
 
        printf("%c\n",(r?'S':'N'));
 
        zerar(b);
    }
 
    return 0;
}
