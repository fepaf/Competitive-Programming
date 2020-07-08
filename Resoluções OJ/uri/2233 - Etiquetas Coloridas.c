// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Etiquetas Coloridas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2233

#include<stdio.h>

unsigned long long r,g,b,ans;

int main(){
	while (scanf("%llx %llx %llx",&r,&g,&b)!=EOF) printf("%llx\n",(((r/g)*(r/g)*(g/b)*(g/b)) + ((r/g)*(r/g)))+1);
	return 0;
}
