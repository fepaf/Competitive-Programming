// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tabelas Hash
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1256

#include<stdio.h>
#include<string.h>
 
int main (){
    int n,c,m,tam[100],tab[100][200],key,t=0;
     
    scanf("%i",&n);
    while(n--){
        scanf("%i %i",&m,&c);
        memset(tam,0,sizeof(tam));
        memset(tab,0,sizeof(tab));      
        for (int i=0;i<c;i++){
            scanf("%i",&key);
            tab[key%m][tam[key%m]++]=key;
        }
        for (int i=0;i<m;i++){
            printf("%i -> ",i);
            for (int j=0;j<tam[i];j++) printf("%i -> ",tab[i][j]);
            printf("\\\n");
        }
        if (n) printf("\n");
    }
     
    return 0;
}
