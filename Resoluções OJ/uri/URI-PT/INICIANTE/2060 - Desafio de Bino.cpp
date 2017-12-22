// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Desafio de Bino
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2060

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int m2,m3,m4,m5,n,l;

int main(){_
	cin>>n;
	while (n--){
		cin>>l;
		m2+=(l%2==0);
		m3+=(l%3==0);
		m4+=(l%4==0);
		m5+=(l%5==0);		
	}
	cout<<m2<<" Multiplo(s) de 2"<<endl;
	cout<<m3<<" Multiplo(s) de 3"<<endl;
	cout<<m4<<" Multiplo(s) de 4"<<endl;
	cout<<m5<<" Multiplo(s) de 5"<<endl;	
	return 0;
}
