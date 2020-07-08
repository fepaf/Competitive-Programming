// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Preenchimento de Vetor I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1173

#include<stdio.h>

int main(){
	int n,v,i;
	
	scanf("%i",&v);
	
	for (i=10;i--;) printf("N[%i] = %i\n",10-i-1,v), v=
	v<<1;
	
	return 0;
}

