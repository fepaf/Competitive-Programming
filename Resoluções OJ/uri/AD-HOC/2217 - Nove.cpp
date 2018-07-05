// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Nove
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2217

#include<stdio.h>

int n,t;

int main(){
	scanf("%i",&t);
	while (t--){
		scanf("%i",&n);
		printf("%i\n",(n&1? 9:1));
	}
	return 0;
}
