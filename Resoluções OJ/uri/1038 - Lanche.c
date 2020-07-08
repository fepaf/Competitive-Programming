// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Lanche
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1038

#include<stdio.h>

int main(){
	int c;
	double p,t;
	scanf("%i %lf",&c,&p);
	switch (c){
		case 1: t=4;
			break;
		case 2: t=4.5;
			break;
		case 3: t=5;
			break;
		case 4: t=2;
			break;
		case 5: t=1.5;
			break;
			
	}
	printf("Total: R$ %.2lf\n",t*p);
	return 0;
}
