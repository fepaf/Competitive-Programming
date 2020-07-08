// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Funções
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1555

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int x,y,r,b,c,n;

int main(){_
	cin>>n;
	while (n--){
		cin>>x>>y;
		r=9*x*x+y*y;
		b=2*x*x+25*y*y;
		c=-100*x+y*y*y;
		if (r>b && r>c) cout<<"Rafael";
		else if (b>c) cout<<"Beto";
		else cout<<"Carlos";
		cout<<" ganhou"<<endl;
	}
	return 0;
}
