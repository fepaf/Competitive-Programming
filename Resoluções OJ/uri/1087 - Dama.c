// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Dama
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1087

#include<stdio.h>
#include<stdlib.h>

int a,b,c,d;

int main(){
    while (scanf("%i %i %i %i",&a,&b,&c,&d) && (a||b||c||d)){
        if (a==c && b==d) printf("0\n");
        else if (abs(a-c)==abs(b-d) || a==c || b==d) printf("1\n");
        else printf("2\n");
    }
    return 0;
}
