// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bolsa de Valores
// Nível: 4
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1932

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define MAXN 2000123

using namespace std;

int n,c,p[MAXN],memo[MAXN][2];

int lucro(int dia,int acao){
	int ans;
	if (dia==n) return 0;
	if (memo[dia][acao]!=-1) return memo[dia][acao];
	ans=acao ? max(lucro(dia+1,1),lucro(dia+1,0)+p[dia]) : max(lucro(dia+1,0),lucro(dia+1,1)-p[dia]-c);
	return memo[dia][acao]=ans;
}

int main(){_
	while (cin>>n>>c){
		for (int i=0;i<n;i++){
			cin>>p[i];
			memo[i][0]=memo[i][1]=-1;
		}
		cout<<lucro(0,0)<<endl;
	}
	return 0;
}
