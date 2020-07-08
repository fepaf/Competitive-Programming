// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jogo das Pilhas
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1522

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define MAXN 101

using namespace std;

int n,a[MAXN],b[MAXN],c[MAXN],memo[MAXN][MAXN][MAXN];

int solve(int na, int nb, int nc){
	int ans=0;
	if (!(na||nb||nc)) return 1;
	
	if (memo[na][nb][nc]!=-1) return memo[na][nb][nc];
	
	if (na && (a[na]%3==0)) ans|=solve(na-1,nb,nc);
	if (nb && (b[nb]%3==0)) ans|=solve(na,nb-1,nc);
	if (nc && (c[nc]%3==0)) ans|=solve(na,nb,nc-1);
	if (na && nb && ((a[na]+b[nb])%3==0)) ans|=solve(na-1,nb-1,nc);
	if (na && nc && ((a[na]+c[nc])%3==0)) ans|=solve(na-1,nb,nc-1);
	if (nb && nc && ((b[nb]+c[nc])%3==0)) ans|=solve(na,nb-1,nc-1);
	if (na && nb && nc && ((a[na]+b[nb]+c[nc])%3==0)) ans|=solve(na-1,nb-1,nc-1);
	
	return memo[na][nb][nc]=ans;
}

int main(){_
	while ((cin>>n)&&n){
		for (int i=0;i<=n;i++) for (int j=0;j<=n;j++) for (int k=0;k<=n;k++) memo[i][j][k]=-1;
		for (int i=n;i>=1;i--)cin>>a[i]>>b[i]>>c[i];
		cout<<solve(n,n,n)<<endl;	
	}
	return 0;
}
