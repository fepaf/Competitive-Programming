// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Resto 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1075

#include<stdio.h>
 
int main(){
    int  n,i,x;
    scanf("%i",&n);
    for (i=2;i<=10000;i+=n){
    	printf("%i\n",i);
    }
    return 0;
}
