// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Maior e Posição
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1080

#include<stdio.h>
 
int main(){
    int  n,i,maior=-1,pos;
    for (i=1;i<=100;i++){
    	scanf("%i",&n);
    	if (n>maior) maior=n,pos=i;
    }
    printf("%i\n%i\n",maior,pos);
    return 0;
}
