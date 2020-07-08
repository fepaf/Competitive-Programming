// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Peça Perdida
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2322

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,i,x,all;

int main(){_
	cin>>n;
	all=(n>>1)&1^(n&1?1:n);
	while (--n){
		cin>>x;
		all^=x;
	}
	cout<<all<<endl;
	return 0;
}
