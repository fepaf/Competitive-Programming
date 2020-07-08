// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pepe, Já Tirei a Vela!
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2152

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl "\n"

using namespace std;

int t,h,m,o;

int main(){_
	cin>>t;
	while (t--){
		cin>>h>>m>>o;
		cout<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<m<<" - A porta "<<(o?"abriu!":"fechou!")<<endl;
	}
	return 0;
}
