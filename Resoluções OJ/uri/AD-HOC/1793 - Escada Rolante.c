// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Escada Rolante
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1793

#include<stdio.h>

int main(){
	int n,t,i,r,ant;
	while (scanf("%i",&n) && n){
		r=10;
		scanf("%i",&ant);
		while (--n){
			scanf("%i",&t);
			if (t-ant<10) r+=t-ant;
			else r+=10;
			ant=t;
		}
		printf("%i\n",r);
	}
	return 0;
}
