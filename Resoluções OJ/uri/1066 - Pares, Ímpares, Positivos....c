// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pares, Ímpares, Positivos...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1066

#include<stdio.h>
int main(){
	int n[5],par,impar,pos,neg,i;
	par=impar=pos=neg=0;
	for (i=0;i<5;i++){
		scanf("%i",&n[i]);
		if (n[i]%2) impar++;
		else par++;
		if (n[i]>0) pos++;
		if (n[i]<0) neg++;
	}
	printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n",par,impar,pos,neg)	;
	return 0;
}
