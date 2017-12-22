// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Há Muito, Muito Tempo Atrás
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1962

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n,t;
    scanf("%i",&n);
    while (n--){
        scanf("%i",&t);
        printf("%i %c.C.\n",abs(2015-t)+(t>2014),(t>2014?'A':'D'));
    }
    return 0;
}

