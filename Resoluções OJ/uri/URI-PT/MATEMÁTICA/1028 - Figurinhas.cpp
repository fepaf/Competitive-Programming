// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Figurinhas
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1028

#include<stdio.h>

int main(){
	int n,f1,f2,aux;
	scanf("%i",&n);
	while (n--){
		scanf("%i %i",&f1,&f2);
		
		while (f2){
			aux=f1;
			f1=f2;
			f2=aux%f2;
		}
		printf("%i\n",f1);
	}
	return 0;
}
