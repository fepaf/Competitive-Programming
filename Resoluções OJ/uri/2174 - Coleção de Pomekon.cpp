// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Coleção de Pomekon
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2174

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string s;
set<string> pokemon;
int n;

int main(){_
	cin>>n;
	while (n--){
		cin>>s;
		pokemon.insert(s);
	}
	cout<<"Falta(m) "<<(151-(int)pokemon.size()>0 ? 151-(int)pokemon.size() : 0)<<" pomekon(s)."<<endl;
	return 0;
}
