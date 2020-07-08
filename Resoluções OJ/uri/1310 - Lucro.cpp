// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Lucro
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1310

#include<stdio.h>
#define max(x,y) (x>y?x:y)

int main(){
	int n,c,r,atual,maximo;
	
	while (scanf("%i %i",&n,&c)!=EOF){
		atual=maximo=0;
		while (n--){
			scanf("%i",&r);
			atual=max(atual+r-c,0);
			maximo=max(maximo,atual);
		}
		printf("%i\n",maximo);
	}
	
	return 0;
}
