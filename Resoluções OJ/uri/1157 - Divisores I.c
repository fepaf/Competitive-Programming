// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Divisores I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1157

#include<stdio.h>

int main(){
	int n,i;
	scanf("%i",&n);
	printf("1\n");
	for (i=2;i<=n/2;i++) if (!(n%i)) printf("%i\n",i);
	printf("%i\n",n);
	return 0;
}
