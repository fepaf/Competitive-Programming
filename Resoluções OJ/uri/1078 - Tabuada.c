// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tabuada
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1078

#include<stdio.h>
 
int main(){
    int  n,i,x;
    scanf("%i",&n);
    for (i=1;i<=10;i++){
    	printf("%i x %i = %i\n",i,n,i*n);
    }
    return 0;
}
