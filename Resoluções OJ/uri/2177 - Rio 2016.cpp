// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Rio 2016
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2177

#include<stdio.h>

long long  x,y,n,a,b,bol,t,cnt;

int main(){
	scanf("%lli %lli %lli",&x,&y,&n);
	bol=cnt=0;
	for (int i=1; i<=n; i++){
		scanf("%lli %lli %lli",&a,&b,&t);
		if (t*t>(x-a)*(x-a)+(y-b)*(y-b)){
			if (cnt++) printf(" ");
			printf("%i",i);
			bol=1;
		}
	}
	if (!bol) printf("-1");
	printf("\n");
	return 0;
}
