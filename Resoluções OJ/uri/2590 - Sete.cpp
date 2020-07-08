// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sete
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2590

#include<stdio.h>

int t,n,ans[]={1,7,9,3};

int main(){
    scanf("%i",&t);
    while (t--){
        scanf("%i",&n);
        printf("%i\n",ans[n&3]);
    }
    return 0;
}

