// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Contando Caracters
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2108

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl "\n"

using namespace std;

string linha,word,bigger;
stringstream ss;

int main(){_
	while (getline(cin,linha)&&linha!="0"){
		ss<<linha;
		ss>>word;
		bigger=(word.size()>=bigger.size() ? word : bigger);
		cout<<word.size();
		while (ss>>word){
			cout<<"-"<<word.size();
			bigger=(word.size()>=bigger.size() ? word : bigger);
		}
		cout<<endl;
		ss.clear();
	}
	cout<<"\nThe biggest word: "<<bigger<<endl;
	return 0;
}
