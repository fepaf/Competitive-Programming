// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Esquerda, Volver!
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1437

#include <stdio.h>

int main(){
	int n,r;
	char cmd,d[4]={'N','L','S','O'};
	
	while (scanf("%i",&n)==1 && n){
		r=0;
		while (n--){
			scanf(" %c",&cmd);
			r=(((r+(cmd =='D' ? 1:-1))+4)%4);
		}
		printf("%c\n",d[r]);
	}
	
	return 0;
}

