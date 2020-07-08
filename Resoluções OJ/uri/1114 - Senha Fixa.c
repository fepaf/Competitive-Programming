// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Senha Fixa
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1114

#include<stdio.h>
#define min(x,y) (x<y?x:y)
#define max(x,y) (x>y?x:y)
int main(){
    int  n,x,i,cd;
    do{
    scanf("%i",&n);
    if (n!=2002) printf("Senha Invalida\n");
	}while(n!=2002);
    printf("Acesso Permitido\n");
   
    
    return 0;
}

