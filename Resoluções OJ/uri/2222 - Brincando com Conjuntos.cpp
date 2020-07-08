// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Brincando com Conjuntos
// Nível: 2
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2222

#include<stdio.h>
#define MAXN 10123

long long y[MAXN];
int t,n,q,x,m,a,b,op;

int c1(long long n){return n ? c1(n&(n-1))+1: 0;}

int main(){
	scanf("%i",&t);
	while (t--){
		scanf("%i",&n);
		for (int i=1;i<=n;i++){
			scanf("%i",&m);
			y[i]=0LL;
			while (m--){
				scanf("%i",&x);
				y[i]|=(1LL<<x);
			}
		}
		scanf("%i",&q);
		while (q--){
			scanf("%i %i %i",&op,&a,&b);
			printf("%i\n",(op==1 ? c1(y[a]&y[b]) : c1(y[a]|y[b])));
		}
	}
	return 0;
}
