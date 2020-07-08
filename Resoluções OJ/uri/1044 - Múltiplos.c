// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Múltiplos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1044

#include<stdio.h>

int main(){
	int a,b;
	scanf("%i %i",&a,&b);
	printf("%s\n",(a%b==0 || b%a==0?"Sao Multiplos":"Nao sao Multiplos"));
	return 0;
}
