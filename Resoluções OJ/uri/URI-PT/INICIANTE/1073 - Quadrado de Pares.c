// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Quadrado de Pares
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1073

#include<stdio.h>
 
int main(){
    int  n,i;
    scanf("%i",&n);
    for (i=1;i<=n;i++){
    	if (!(i%2))printf("%i^2 = %i\n",i,i*i);
    }
    return 0;
}
