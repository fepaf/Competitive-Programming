// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sequência Lógica 2
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1145

#include<stdio.h>
 
int main(){
	int x,y,i;
	scanf("%i%i",&x,&y);
	for (i=1;i<=y;i++) printf("%i%c",i,(i%x?' ':'\n'));
	if (y%x) printf("\n");
    return 0;
}
