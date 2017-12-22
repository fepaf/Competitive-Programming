// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Número Primo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1165

#include<stdio.h>
 
int main(){
    int  n,x,i,cd;
    
    scanf("%i",&n);
    while (n--){
    	scanf("%i",&x);
    	cd=0;
    	for (i=2;i*i<=x;i++) if (x%i==0) cd++;
    	printf("%i%s\n",x,(cd?" nao eh primo":" eh primo"));
    }
    
    return 0;
}
