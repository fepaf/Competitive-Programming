// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Múltiplos de 13
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1132

#include<stdio.h>
#define min(x,y) (x<y?x:y)
#define max(x,y) (x>y?x:y)
int main(){
    int  n,x,i,cd;
    
    scanf("%i%i",&n,&x);

    	cd=0;
    	for (i=min(n,x);i<=max(n,x);i++) if (i%13) cd+=i;
    	printf("%i\n",cd);
   
    
    return 0;
}

