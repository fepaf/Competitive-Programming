// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Descobrindo Senha
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2252

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define di pair<double,int>
#define vdi vector<di>
#define eb emplace_back
#define fs first
#define sc second

using namespace std;

vdi teclas;
int n;

int cmp(di a, di b){
	if (a.fs != b.fs) return a.fs > b.fs;
	return a.sc < b.sc;
}

int main(){_
	for (int caso = 1; cin>>n; caso++){
		teclas = vdi(10);
		for (int i=0; i<10; i++){
			cin>>teclas[i].fs;
			teclas[i].sc = i;
		}
		sort(teclas.begin(), teclas .end(), cmp);
		cout<<"Caso "<<caso<<": ";
		for (int i=0; i<n; i++){
			cout<<teclas[i].sc;
		}
		cout<<endl;
	}
	return 0;
}
