// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sedex
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2375

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,l,a,p;

int main(){_
	cin>>n>>a>>l>>p;
	cout<<(min(min(a,l),p) >= n? "S" : "N")<<endl;
	return 0;
}

