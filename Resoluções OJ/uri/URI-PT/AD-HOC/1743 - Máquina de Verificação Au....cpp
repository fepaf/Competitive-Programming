// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Máquina de Verificação Au...
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1743

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int ans=1,x[5],y[5];

int main(){_
	for (int i=0;i<5;i++) cin>>x[i];
	for (int i=0;i<5;i++){
		cin>>y[i];
		ans*=(x[i]^y[i]);
	}
	cout<<(ans?"Y":"N")<<endl;
	return 0;
}
