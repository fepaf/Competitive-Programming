// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Problema Fácil de Rujia Liu?
// Nível: 4
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1424

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,k,i,m,x,v;
map<int, vector<int> > occ;

int main(){_
	while (cin>>n>>m){
		for (i=1;i<=n;i++){
			cin>>x;
			occ[x].push_back(i);
		}
		while (m--){
			cin>>k>>v;
			cout<<(k>occ[v].size() ? 0 : occ[v][k-1])<<endl;
		}
		occ.clear();
	}
	return 0;
}
