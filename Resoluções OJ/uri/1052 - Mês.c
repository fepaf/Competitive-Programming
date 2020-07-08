// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Mês
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1052

#include<stdio.h>

int main(){
	char mes[12][21]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int i;
	scanf("%i",&i);
	printf("%s\n",mes[i-1]);
	return 0;
}
