// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tipo de Combustível
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1134

#include<stdio.h>

int op,c[3];

int main(){
	while (scanf("%i",&op) && op!=4){
		while (op<1 && op>3) scanf("%i",&op);
		c[op-1]++;
	}
	printf("MUITO OBRIGADO\nAlcool: %i\nGasolina: %i\nDiesel: %i\n",c[0],c[1],c[2]);
	return 0;
}
