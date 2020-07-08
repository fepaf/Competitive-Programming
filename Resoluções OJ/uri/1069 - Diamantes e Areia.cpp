// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Diamantes e Areia
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1069

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

int n,r,i,p;
string s;

int main(){_
	cin>>n;
	while (n--){
		cin>>s;
		for (i=r=p=0;i<s.length();i++){
			if (s[i]=='<') p++;
			else if (s[i]=='>' && p) r++ , p--;
		}
		cout<<r<<endl;
	}
	return 0;
}
