// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: As Abas de Péricles
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2061

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int n,m;
string cmd;

int main(){_
	cin>>n>>m;
	while (m--){
		cin>>cmd;
		n+=(cmd=="fechou" ? 1:-1);
	}
	cout<<n<<endl;
	return 0;
}
