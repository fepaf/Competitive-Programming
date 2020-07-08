// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Mensagem Oculta
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1272

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

string s,w;
int n;

int main(){_
	cin>>n;
	getline(cin,s);
	while (n--){
		getline(cin,s);
		stringstream var(s);
		while (var>>w) cout<<w[0];
		cout<<endl;
	}
	return 0;
}

