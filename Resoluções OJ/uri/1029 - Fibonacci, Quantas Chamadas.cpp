// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fibonacci, Quantas Chamadas?
// Nível: 2
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1029

#include<stdio.h>

int main(){
	int n,x,af,f,ac,c,i;
	
	scanf("%i",&n);
	
	while(n--){
		scanf("%i",&x);
		ac=af=c=0;
		f=1;
		i=x;
		while (--i){
			f=af+f;
			af=f-af;
			c=ac+c+2;
			ac=c-ac-2;
		}
		printf("fib(%i) = %i calls = %i\n",x,c,f);
	}
	
	return 0;
}
