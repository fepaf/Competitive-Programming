// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Onde Estão Minhas Chaves
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1800

#include <stdio.h>
 
int vis[1000];
 
int main(){
    int q,e,s,c,i;
    scanf("%i %i",&q,&e);
    while (e--){
        scanf("%i",&s);
        vis[s-1]=1;
    }
    while (q--){
        scanf("%i",&c);
        printf("%i\n",!vis[c-1]);
        vis[c-1]=1;
    }
    return 0;
}
