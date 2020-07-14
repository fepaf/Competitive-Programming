// Autor: Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Problema Fácil de Rujia Liu?
// Nível: 4
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1424

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back

using namespace std;

int n,k,i,m,x,v;
vvi occ;

int main(){_
	while (cin>>n>>m){
		occ = vvi(1000001);
		for (i=1;i<=n;i++){
			cin>>x;
			occ[x].eb(i);
		}
		while (m--){
			cin>>k>>v;
			cout<<(k>occ[v].size() ? 0 : occ[v][k-1])<<endl;
		}
	}
	return 0;
}
