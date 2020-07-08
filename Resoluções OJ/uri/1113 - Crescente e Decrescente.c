// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Crescente e Decrescente
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1113

#include<stdio.h>

int main(){
	int n,v,i;
	
	while (scanf("%i %i",&n,&v) && (n!=v)) printf("%s\n",(n>v?"Decrescente":"Crescente"));
	
	return 0;
}

