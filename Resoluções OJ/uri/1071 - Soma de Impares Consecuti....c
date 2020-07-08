// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Soma de Impares Consecuti...
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1071

#include<stdio.h>
int main(){
	int s=0,x,y,i;
	scanf("%i%i",&x,&y);
	for (i=(x<y?x:y)+1;i<(x>y?x:y);i++){
		if (i%2) s+=i;
	}
	printf("%i\n",s);
	return 0;
}
