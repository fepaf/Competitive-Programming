// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fechem as Portas!
// Nível: 6
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1371

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;
int n,i;
int main (){_
	while ((cin>>n)&&n){
		cout<<"1";
		for (i=2;i*i<=n;i++) cout<<" "<<i*i;
		cout<<endl;
	}
	return 0;
}
