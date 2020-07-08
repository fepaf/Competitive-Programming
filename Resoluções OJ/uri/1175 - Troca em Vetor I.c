// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Troca em Vetor I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1175

#include<stdio.h>
#define max 20

int main(){
	int v[max],i;
	for (i=max;i--;) scanf("%i",&v[i]);
	for (i=0;i<max;i++) printf("N[%i] = %i\n",i,v[i]);
	return 0;
}
