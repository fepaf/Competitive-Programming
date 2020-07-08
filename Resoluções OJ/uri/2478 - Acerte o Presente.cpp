// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Acerte o Presente
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2478

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int x,i;
string n,p;
map < string, pair< pair<string,string>, string> > opcoes;

int main(){_
	cin>>x;

	for(i=x;i--;){
		cin>>n>>p;
		opcoes[n].first.first=p;
		cin>>p;
		opcoes[n].first.second=p;
		cin>>p;
		opcoes[n].second=p;
	}
	while (cin>>n>>p) cout<<(opcoes[n].first.first==p || opcoes[n].first.second==p || opcoes[n].second==p? "Uhul! Seu amigo secreto vai adorar o/" : "Tente Novamente!")<<endl;
	return 0;
}

