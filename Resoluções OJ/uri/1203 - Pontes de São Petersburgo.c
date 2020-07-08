// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pontes de São Petersburgo
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1203

#include<stdio.h>
#define z1(k)  for (i=k;i--;) grau[i]=0;
#define z2(k)  for (i=k;i--;) pode[i]=0;

int r,k,grau[100],x,y,i,pode[10000],j;
int main(){
	
	while (scanf("%i %i",&r,&k)!=EOF){
		for (i=k;i--;){
			scanf("%i %i",&x,&y);
			++grau[x-1];
			++grau[y-1];
		}
		
		pode[0]=1;
		for (i=r;i--;){
			//printf("%i ",grau[i]);
			//if (pode[k]+=pode[k-grau[i]]) break;
			for (j=k;j>=grau[i];j--){
				if (pode[j-grau[i]])pode[j]=pode[j-grau[i]];
			}
		}
		
		printf("%c\n",(pode[k]?'S':'N'));
		
		z1(r);
		z2(k+1);
	}
	
	return 0;
}
