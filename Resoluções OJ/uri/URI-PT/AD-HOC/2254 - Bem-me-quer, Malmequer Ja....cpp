// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bem-me-quer, Malmequer Ja...
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2254

#include<stdio.h>

int n,ans;

int main(){
    while (scanf("%i",&n)!=EOF){
        for (ans=0; n; n>>=1) ans^=(n&1);
        printf("she loves %s\n",(ans ? "me" : "not"));
    }
    return 0;
}

