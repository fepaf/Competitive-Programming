// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fatorial de Novo!
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1429

#include<stdio.h>

int main(){
	int n,i,r,d,f[5]={1,2,6,24,120};
	
	while (scanf("%i",&n) && n){
		i=r=0;
		while (n){
			r+=(n%10)*f[i++];
			n/=10;
		}
		printf("%i\n",r);
	}
	
	return 0;
}
