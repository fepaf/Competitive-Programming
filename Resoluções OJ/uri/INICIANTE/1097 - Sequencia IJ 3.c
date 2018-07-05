// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sequencia IJ 3
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1097

#include<stdio.h>
 
int main(){
    int  i,j;
    for (i=1,j=7;i<=9;i+=2,j+=2){
		printf("I=%i J=%i\n",i,j);
		printf("I=%i J=%i\n",i,j-1);
		printf("I=%i J=%i\n",i,j-2);
    }
    return 0;
}
