// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Mergulho
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1471

#include<stdio.h>

int n,r,i,v[10002],x,ok;

int main(){
    while (scanf("%i %i",&n,&r)!=EOF){
        for (i=r;i--;){
            scanf("%i",&x);
            v[x]=1;
        }
        ok=0;
        for (i=1;i<=n;i++){
            if (!v[i]) printf("%i ",i), ok++;
            v[i]=0;
        }
        if (!ok) printf("*");
        printf("\n");
    }
    return 0;
}

