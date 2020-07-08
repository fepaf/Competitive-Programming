// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Guarda Costeira
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1247

#include<bits/stdc++.h>

using namespace std;

int vf,vg,d;

int main(){
	while (cin>>d>>vf>>vg) cout<<(vf*vf*d*d<=144*(vg*vg-vf*vf) ? "S" : "N")<<endl;
	return 0;
} 
