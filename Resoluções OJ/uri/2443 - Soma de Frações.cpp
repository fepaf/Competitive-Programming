// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Soma de Frações
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2443

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int a,b,c,d,mdc;

int main(){_
	cin>>a>>b>>c>>d;
	mdc=__gcd(a*d+b*c,b*d);
	cout<<((a*d+b*c)/mdc)<<" "<<((b*d)/mdc)<<endl;
	return 0;
}
