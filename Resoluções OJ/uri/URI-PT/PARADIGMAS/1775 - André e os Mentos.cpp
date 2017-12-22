// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: André e os Mentos
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1775

#include<stdio.h>
#define min(x,y) (x<y? x:y)

int n,t,v[1<<10],memo[1<<10][1<<10],caso,i,j;

int solve(int l, int r){
	if (l==r) return 1;
	if (l+1==r) return 1+(v[l]!=v[r]);
	if (memo[l][r]!=-1) return memo[l][r];
	return memo[l][r]=1+(v[l]==v[r] ? solve(l+1,r-1) : min(solve(l,r-1),solve(l+1,r)));
}

int main(){
	scanf("%i",&t);
	while (t--){
		scanf("%i",&n);
		for (i=0;i<n;i++){
			scanf("%i",&v[i]);
			for (j=0;j<n;j++) memo[i][j]=-1;
		}
		printf("Caso #%i: %i\n",++caso,solve(0,n-1));
	}
	return 0;
}
