// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fatorial Simples
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1153

#include<stdio.h>
#define min(x,y) (x<y?x:y)
#define max(x,y) (x>y?x:y)
int main(){
    int  n,x,y,i,cd;
 
 	x=1;
	scanf("%i",&n);
 	for (i=1;i<=n;i++){
 		x*=i;
 	}
 	printf("%i\n",x);
    return 0;
}

