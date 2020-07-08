// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Rot13
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1249

#include<bits/stdc++.h>

using namespace std;

int t,sum,i;
string s;

int main(){
	while (getline(cin,s)){
		for (i=s.length();i--;){
			if (s[i]>='a' && s[i]<='z') s[i]=((s[i]-'a'+13)%26 + 'a');
			else if (s[i]>='A' && s[i]<='Z') s[i]=((s[i]-'A'+13)%26 + 'A');
		}
		cout<<s<<endl;
	}
	return 0;
}
