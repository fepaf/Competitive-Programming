// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Colocando Radares
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2598

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long n,r,c;

int main(){_
    cin>>c;
	while(c--){
	    cin>>n>>r;
		cout<<(n+r-1)/r<<endl;
	} 
	return 0;
}
