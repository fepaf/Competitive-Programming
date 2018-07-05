// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: LED
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1168

#include<stdio.h>
#include<string.h>

int main(){
	int i,tam,n,r,led[10]={6,2,5,5,4,5,6,3,7,6};
	char v[101];
	
	scanf("%i",&n);
	
	while (n--){
		scanf(" %s",v);
		tam=strlen(v);
		for(i=0,r=0;i<tam;i++){r+=led[(v[i]-'0')];}
		printf("%i leds\n",r);
	}
	return 0;
}
