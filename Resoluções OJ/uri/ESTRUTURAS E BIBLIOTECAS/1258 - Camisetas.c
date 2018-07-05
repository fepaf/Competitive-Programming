// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Camisetas
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1258

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct tipo{
	char nome[1001],cor[9],t;
}tipo;

tipo v[60];

int cmp(const void *a,const void *b){
	tipo *x,*y;
	x=((tipo*)a);
	y=((tipo*)b);
	if (x->cor[0]==y->cor[0]) {
		if (x->t==y->t) return strcmp(x->nome,y->nome);
		else return y->t - x->t;
	}
	else return x->cor[0] - y->cor[0];
}

int main(){
	int n,i,c=0;
	while (scanf("%i ",&n) && n){
		for (i=0;i<n;i++) gets(v[i].nome) , scanf(" %s %c ",&v[i].cor,&v[i].t);
		qsort(v,n,sizeof(v[0]),cmp);
		if (c++) printf("\n");
		for (i=0;i<n;i++) printf("%s %c %s\n",v[i].cor,v[i].t,v[i].nome);
	}
	return 0;
}


