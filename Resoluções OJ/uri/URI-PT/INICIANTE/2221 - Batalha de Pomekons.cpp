// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Batalha de Pomekons
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2221

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int t,l;
double ans,a,d,b;

int main(){_
	cin>>t;
	while (t--){
		cin>>b;
		cin>>a>>d>>l;
		ans=(a+d)/2 + b*(!(l&1));
		cin>>a>>d>>l;
		ans-=(a+d)/2 + b*(!(l&1));;
		cout<<(ans ? (ans > 0 ? "Dabriel" : "Guarte")  : "Empate")<<endl;
	}
	return 0;
}
