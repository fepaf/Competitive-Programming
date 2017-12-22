// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Mjölnir
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1865

#include<bits/stdc++.h>

using namespace std;

int n,c;
string nome;

int main(){
	ios_base::sync_with_stdio(false);
	cin>>c;
	while (c--){
		cin>>nome>>n;
		cout<<(nome=="Thor"?"Y":"N")<<endl;
	}
	return 0;
}
