// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Números Positivos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1060

#include<stdio.h>
int main(){
	int n1,n2,n3,n4,n5,n6,c=0;
	scanf("%i",&n1);
	if (n1>=0) c++;
	scanf("%i",&n2);
	if (n2>=0) c++;
	scanf("%i",&n3);
	if (n3>=0) c++;
	scanf("%i",&n4);
	if (n4>=0) c++;
	scanf("%i",&n5);
	if (n5>=0) c++;
	scanf("%i",&n6);
	if (n6>=0) c++;
	printf("%i valores positivos\n",c)	;
	return 0;
}
