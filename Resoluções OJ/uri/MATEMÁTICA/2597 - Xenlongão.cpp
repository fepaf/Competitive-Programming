// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Xenlongão
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2597

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long n,r,c;

int main(){
	for (cin>>c;c--;){
		cin>>n;
		r=sqrt(n);
		cout<<(n-r)<<endl;
	}
	return 0;
}

