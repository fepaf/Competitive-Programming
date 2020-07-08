// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Cofrinhos da Vó Vitória
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2247

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,j,z,ans,caso;

int main(){_
	while ((cin>>n)&&n){
		ans=0;
		cout<<"Teste "<<++caso<<endl;
		while (n--){
			cin>>j>>z;
			ans+=(j-z);
			cout<<ans<<endl;
		}
		cout<<endl;
	}
}
