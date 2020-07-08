// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fibonacci Fácil
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1151

#include<stdio.h>

int main(){
	int a1,a2,n,i;
	scanf("%i",&n);
	a1=-1 , a2=1;
	for (i=n;n--;){
		a2+=a1;
		printf("%i%s",a2,(n?" ":""));
		a1=a2-a1;
	}
	printf("\n");
	return 0;
}
