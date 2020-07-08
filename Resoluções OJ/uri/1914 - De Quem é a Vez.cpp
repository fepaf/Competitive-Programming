// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: De Quem é a Vez?
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1914

#include<bits/stdc++.h>

using namespace std;

int n,m,qt;
string nome1,esc1,nome2,esc2;

int main(){
	ios_base::sync_with_stdio(false);
	cin>>qt;
	while (qt--){
		cin>>nome1>>esc1>>nome2>>esc2>>n>>m;
		cout<<(esc1=="IMPAR" && (n+m)%2 || esc1=="PAR" && (n+m)%2==0? nome1 : nome2)<<endl;
	}
	return 0;
}
