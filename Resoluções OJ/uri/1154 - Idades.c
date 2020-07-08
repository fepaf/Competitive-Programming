// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Idades
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1154

#include<stdio.h>

int i,s,q;

int main(){	
	while (scanf("%i",&i)&& (i>0)){
		s+=i;
		q++;
	}
	printf("%.2f\n",((s*1.0)/q+(q==0)));
	return 0;
}
