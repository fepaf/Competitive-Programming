// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Seis Números Ímpares
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1070

#include<stdio.h>
int main(){
	int x,i,j;
	scanf("%i",&x);
	for (i=(x%2?x:x+1),j=0;j<6;i+=2,j++){
		printf("%i\n",i);
	}
	return 0;
}
