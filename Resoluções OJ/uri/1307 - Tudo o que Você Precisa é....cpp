// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tudo o que Você Precisa é...
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1307

#include<stdio.h>
#include<string.h>

int main(){
	int n,s2,s1,aux,t=1;
	char c;
	scanf("%i ",&n);
	while(n--){
		s1=s2=0;
		while ((c=getchar())!='\n') s1=(s1*2)+(c-'0');
		while ((c=getchar())!='\n') s2=(s2*2)+(c-'0');
		while (s2){
			aux=s1;
			s1=s2;
			s2=(aux%s2);
		}
		printf("Pair #%i: %s\n",t++,(s1-1 ? "All you need is love!":"Love is not all you need!"));
	}
	return 0;
}
