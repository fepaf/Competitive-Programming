// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Fantástico Jaspion
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1449

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

map<string,string> sap;
int n,m,t;
string jap,port,mus;

int main(){_
	cin>>t;
	while (t--){
		cin>>m>>n;
		getline(cin,port);
		while (m--){
			getline(cin,jap);
			getline(cin,port);
			sap[jap]=port;
		}
		while (n--){
			getline(cin,mus);
			stringstream music(mus);
			music>>mus;
			cout<<(sap[mus].length() ? sap[mus] : mus);
			while (music>>mus) cout<<" "<<(sap[mus].length() ? sap[mus] : mus);
			cout<<endl;
		}
		cout<<endl;
		sap.erase(sap.begin(),sap.end());
	}
	return 0;
}
