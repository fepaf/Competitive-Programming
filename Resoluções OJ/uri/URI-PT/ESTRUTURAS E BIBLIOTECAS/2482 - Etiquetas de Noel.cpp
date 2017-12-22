// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Etiquetas de Noel
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2482

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m;
map<string,string> com;
string nome,come,idioma;

int main(){_
	cin>>n;
	getline(cin,idioma);
	while(n--){
		getline(cin,idioma);
		getline(cin,come);
		com[idioma]=come;
	}
	cin>>m;
	getline(cin,idioma);
	while (m--){
		getline(cin,nome);
		getline(cin,idioma);
		cout<<nome<<endl<<com[idioma]<<endl<<endl;
	}
	return 0;
}

