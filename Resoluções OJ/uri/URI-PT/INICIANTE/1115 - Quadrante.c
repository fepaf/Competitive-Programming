// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Quadrante
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1115

#include<stdio.h>
#define min(x,y) (x<y?x:y)
#define max(x,y) (x>y?x:y)
int main(){
    int  n,x,y,i,cd;
 
 
 while (scanf("%i %i",&x,&y)&& x && y){
 
 if (y>0){
 	if (x>0) printf("primeiro\n");
 	else printf("segundo\n");
 }
 else {
 	if (x>0) printf("quarto\n");
 	else printf("terceiro\n");
 }
 
	}
    return 0;
}

