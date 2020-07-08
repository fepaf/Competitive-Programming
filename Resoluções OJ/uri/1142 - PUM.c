// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: PUM
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1142

#include<stdio.h>
#define min(x,y) (x<y?x:y)
#define max(x,y) (x>y?x:y)
int main(){
    int  n,x,y,i,cd;
 
 
	scanf("%i",&n);
 	for (i=0;i<n;i++){
 		printf("%i %i %i PUM\n",(i*4+1),(i*4+2),(i*4+3));
 	}
    return 0;
}

