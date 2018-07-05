// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Contando Carneirinhos
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1609

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

set <int> carn;
int t,n,x;

int main(){
	cin>>t;
	while (t--){
		cin>>n;
		while (n--){
			cin>>x;
			carn.insert(x);
		}
		cout<<carn.size()<<endl;
		carn.clear();
	}
	return 0;
}
