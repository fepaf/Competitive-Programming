// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ones
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1213

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

int n,r,f;

int main(){_
	while (cin>>n){
		for (f=0,r=1;f=((10*f)%n+1)%n;r++);
		cout<<r<<endl;
	}
	return 0;
}
