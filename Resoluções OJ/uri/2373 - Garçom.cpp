// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Garçom
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2373

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,l,c,ans ;

int main(){_
	cin>>n;
	while (n--){
		cin>>l>>c;
		ans+=(l>c)*c;
	}
	cout<<ans<<endl;
	return 0;
}

