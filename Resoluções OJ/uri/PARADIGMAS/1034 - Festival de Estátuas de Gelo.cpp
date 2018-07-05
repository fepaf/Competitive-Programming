// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Festival de Estátuas de Gelo
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1034

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);
#define inf 1000010

using namespace std;

int t,n,m,a[25],mini[inf],i,j;

int main(){
	cin>>t;
	while (t--){
		cin>>n>>m;
		
		for (i=n;i--;) cin>>a[i];
		
		for (i=1;i<=m;i++){
			mini[i]=inf;
			for (j=0;j<n;j++) if (a[j]<=i && mini[i-a[j]]+1<mini[i]) mini[i]=mini[i-a[j]]+1;
		}
		
		cout<<mini[m]<<endl;
	}
	return 0;
}
