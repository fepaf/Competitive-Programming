// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Crescimento das Populaçõe...
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1380

#include<stdio.h>

int t,a1,a2,i,r,fib[1500];
char ki;

int main(){
    for (a1=1,a2=i=0;i<1500;i++){
        fib[i]=(a1+a2)%1000;
        a1=a2;
        a2=fib[i];
    }
    scanf("%i ",&t);
    while (t--){
        for (r=0;(ki=getchar())!='\n';) r=((10*r)%1500+(ki-'0'));
        printf("%03i\n",fib[(r+1499)%1500]);
    }
    return 0;
}

