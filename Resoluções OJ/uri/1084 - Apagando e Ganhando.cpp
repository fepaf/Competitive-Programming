// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Apagando e Ganhando
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1084

#include<stdio.h>
#include<string.h>
#define max 100001

char p[max];

int main(){
	int d,i,n,top,fim;
	char c;
	
	while(scanf("%i %i ",&n,&d)==2 && (n||d)){
		top=0;
		fim=n-d;
		for (i=0;i<n;i++){
			scanf("%c",&c);
			while (top && d && p[top-1]<c){
				top--;
				d--;
			}
			p[top++]=c;
		} 
		p[fim]='\0';
		printf("%s\n",p);
	}
	return 0;
}


