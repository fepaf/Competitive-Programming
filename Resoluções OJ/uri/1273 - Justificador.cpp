// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Justificador
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1273

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

int n,maxt,t,i,test=0;
string s[50];

int main(){_
	while ((cin>>n) && n){
		if (test++) cout<<endl;
		for (maxt=0,i=n;i--;){
			cin>>s[i];	
			t=s[i].length();
			maxt=max(maxt,t);
		}
		for (int i=n;i--;){
			cout<<setw(maxt)<<s[i]<<endl;
		}
	}
	return 0;
}
