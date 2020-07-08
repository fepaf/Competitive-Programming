// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Grenais
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1131

#include<stdio.h>

int i,g,vi,vg,em,jog,op;

int main(){
	do{
		scanf("%i %i %i",&i,&g,&op);	
		vi+=(i>g);
		vg+=(g>i);
		em+=(i==g);
		++jog;
		printf("Novo grenal (1-sim 2-nao)\n");
	}while (op==1);
	printf("%i grenais\nInter:%i\nGremio:%i\nEmpates:%i\n%s\n",jog,vi,vg,em,(vi-vg?(vi>vg? "Inter venceu mais":"Gremio venceu mais"):("Nao houve vencedor")));
	
	return 0;
}
