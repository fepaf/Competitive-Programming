// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Resto da Divisão
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1133

#include<stdio.h>
#define min(x,y) (x<y?x:y)
#define max(x,y) (x>y?x:y)
int main(){
    int  n,x,y,i,cd;
 
 
 scanf("%i %i",&x,&y);
 
 for (i=min(x,y)+1;i<max(x,y);i++){
 	if ((i%5==2)||(i%5==3)) printf("%i\n",i);
 }
    
    return 0;
}

