// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Precisa-se de Matemáticos...
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1804

#include<stdio.h>
#define max 100000

int t[max+1],p[max],n;

void f5(int i, int val){
	++i;
	while (i<=n){
		t[i]+=val;
		i+=(i&-i);
	}
}

int sum(int i){
	int s=0;
	++i;
	while (i>0){
		s+=t[i];
		i-=(i&-i);
	}
	return s;
}

int main(){
	int i;
	char c;
	scanf("%i",&n);
	for (i=0;i<n;i++){
		scanf("%i",&p[i]);
		f5(i,p[i]);
	}
	while (scanf(" %c %i",&c,&i)!=EOF) (c=='a') ? f5(i-1,-p[i-1]) : printf("%i\n",sum(i-2));
	return 0;
}
