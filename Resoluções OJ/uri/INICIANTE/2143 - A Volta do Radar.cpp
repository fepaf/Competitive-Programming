// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: A Volta do Radar
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2143

#include<bits/stdc++.h>

using namespace std;

int n,t;

int main(){
	while (cin>>t){
		while (t--){
			cin>>n;
			cout<<2*n-2+(n&1)<<endl;
		}		
	}
	return 0;
}
