// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Árvore de Natal
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1768

#include<stdio.h>
 
int main(){
    int n,x,y;
     
    while (scanf("%i",&n)!=EOF){
        x=(n/2) , y=1;
        while (y<=n){
            for (int i=0;i<x;i++){printf(" ");}
            for (int i=0;i<y;i++){printf("*");}
            x-- , y+=2;
            printf("\n");
        }
        for (int i=0;i<n/2;i++){printf(" ");}
        printf("*\n");
        for (int i=0;i<n/2 -1;i++){printf(" ");}
        printf("***\n\n");
    }
    return 0;
}
