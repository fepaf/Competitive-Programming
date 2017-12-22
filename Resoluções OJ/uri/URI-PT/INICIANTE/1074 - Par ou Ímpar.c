// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Par ou Ímpar
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1074

#include<stdio.h>
 
int main(){
    int  n,i,x;
    scanf("%i",&n);
    for (i=1;i<=n;i++){
    	scanf("%i",&x);
    	if (x){
    		if (x%2) printf("ODD ");
    		else printf("EVEN ");
    		if (x>0) printf("POSITIVE\n");
    		else printf("NEGATIVE\n");
    	}
    	else printf("NULL\n");
    }
    return 0;
}
