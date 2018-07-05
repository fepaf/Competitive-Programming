// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Quadrado e ao Cubo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1143

#include<stdio.h>
#define min(x,y) (x<y?x:y)
#define max(x,y) (x>y?x:y)
int main(){
    int  n,x,y,i,cd;
 
 
	scanf("%i",&n);
 	for (i=1;i<=n;i++){
 		printf("%i %i %i\n",i,i*i,i*i*i);
 	}
    return 0;
}

