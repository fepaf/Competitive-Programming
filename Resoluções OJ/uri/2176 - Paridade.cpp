// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Paridade
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2176

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

string s;
int x;

int main(){_
	while (cin>>s){
		x=0;
		for (int i=0;i<s.size();i++) x^=(s[i]-'0');
		s+=(x+'0');
		cout<<s<<endl;
	}
	return 0;
}
