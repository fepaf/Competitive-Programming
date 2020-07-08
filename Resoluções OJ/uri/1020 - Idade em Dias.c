// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Idade em Dias
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1020

#include<stdio.h>
 
int main(){
    int n;
     
    scanf("%i",&n);
     
    printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n",(n/365),((n%365)/30),((n%365)%30));
     
    return 0;
}
