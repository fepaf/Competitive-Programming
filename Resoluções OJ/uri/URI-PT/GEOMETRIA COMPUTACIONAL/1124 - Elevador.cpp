// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Elevador
// Nível: 3
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1124

#include<stdio.h>
#define min(x,y) (x<y?x:y)
#define max(x,y) (x>y?x:y)

int main(){
	int r1,r2,l,c,a,b,r;
	while(!(scanf("%i %i %i %i",&l,&c,&r1,&r2)==(l+c+r1+r2+4))){
		if (min(l,c)<2*max(r1,r2)) printf("N\n");
		else {
			r=(r1+r2);
			a=l-r;
			b=c-r;
			printf("%c\n",(a*a + b*b< r*r? 'N':'S'));
		}
	}
	return 0;
}
