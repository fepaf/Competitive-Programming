// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ultrapassando Z
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1150

#include <stdio.h>

int main(){
	int x,z,r=1,t=0;
	
	scanf("%i",&x);
	do{
		scanf("%i",&z);
	}while(z<=x);
	
	t=x;
	while (t<z){
		t+=(++x);
		r++;	
	}
	
	printf("%i\n",r);
	return 0;
}
