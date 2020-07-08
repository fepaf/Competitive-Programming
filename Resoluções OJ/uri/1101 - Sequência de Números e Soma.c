// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sequência de Números e Soma
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1101

#include<stdio.h>
 
int main(){
    int  n,m,i,x,y,s;
    while (scanf("%i%i",&n,&m)&& (n>0 && m>0)){
	    s=0;
		    for (i=(n<m?n:m);i<=(n>m?n:m);i++){
		    	printf("%i ",i);
				s+=i;
		    }
		    printf("Sum=%i\n",s);
		
	}
    return 0;
}
