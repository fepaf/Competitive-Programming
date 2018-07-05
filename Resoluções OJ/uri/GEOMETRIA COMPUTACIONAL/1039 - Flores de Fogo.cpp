// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Flores de Fogo
// Nível: 2
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1039

#include<stdio.h>
#include<stdlib.h>

int main(){
	int r1,x1,y1,r2,x2,y2,d;
	
	while (scanf("%i %i %i %i %i %i",&r1,&x1,&y1,&r2,&x2,&y2)!=EOF){
		d=(y1 - y2)*(y1 - y2) + (x1 - x2)*(x1 - x2);
		printf("%s\n",(d<=(r1-r2)*(r1-r2) && r1>=r2? "RICO":"MORTO"));
	}
	
	return 0;
}
