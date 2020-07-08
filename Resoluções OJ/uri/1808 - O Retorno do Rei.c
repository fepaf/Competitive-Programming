// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Retorno do Rei
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1808

#include<stdio.h>

int main(){
	char c;
	float s=0,q=0;
	while((c=getchar())!='\n'){
		if (c!='0') s+=(c-'0'), q+=1;
		else s+=9;
	}
	printf("%.2f\n",(s/q));
	return 0;
}
