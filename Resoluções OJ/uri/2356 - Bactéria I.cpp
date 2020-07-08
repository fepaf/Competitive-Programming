// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bactéria I
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2356

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string d,s;

int main(){_
	while (cin>>d>>s){
		cout<<(d.find(s)!=string::npos ? "Resistente" : "Nao resistente")<<endl;
	}
	return 0;
}
