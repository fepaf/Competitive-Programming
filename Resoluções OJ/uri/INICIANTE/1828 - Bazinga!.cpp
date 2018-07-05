// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bazinga!
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1828

#include<bits/stdc++.h>

using namespace std;

map <string,int> id;

long long t,game[5][5]=
{{2, 0, 1, 1, 0},{1, 2, 0, 0, 1},{0, 1, 2, 1, 0},{0, 1, 0, 2, 1},{1, 0, 1, 0, 2}};

string sheldon,raj;

int main(){
	ios_base::sync_with_stdio(false);
	id["pedra"]=0;
	id["papel"]=1;
	id["tesoura"]=2;
	id["lagarto"]=3;
	id["Spock"]=4;
	cin>>t;
	for (int i=t;i--;){
		cin>>sheldon>>raj;
		cout<<"Caso #"<<t-i<<": ";
		if (game[id[sheldon]][id[raj]]==1) cout<<"Bazinga!"<<endl;
		else if (game[id[sheldon]][id[raj]]==0) cout<<"Raj trapaceou!"<<endl;
		else cout<<"De novo!"<<endl;
	} 
	return 0;
}
