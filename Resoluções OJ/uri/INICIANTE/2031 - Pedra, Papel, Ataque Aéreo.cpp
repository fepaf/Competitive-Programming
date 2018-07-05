// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pedra, Papel, Ataque Aéreo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2031

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int n,d;
string p1,p2;
map<string,int> val;


int main(){_
	cin>>n;
	val["papel"]=1;
	val["pedra"]=2;
	val["ataque"]=3;	
	while (n--){
		cin>>p1>>p2;
		d=val[p1]-val[p2];
		if (d>0) cout<<"Jogador 1 venceu"<<endl;
		else if (d<0) cout<<"Jogador 2 venceu"<<endl;
		else if (p1=="papel") cout<<"Ambos venceram"<<endl;
		else if (p1=="pedra") cout<<"Sem ganhador"<<endl;
		else if (p1=="ataque") cout<<"Aniquilacao mutua"<<endl;
	}
	return 0;
}
