// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Flores Florescem da França
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1140

#include<bits/stdc++.h>

using namespace std;

int i,j,t;
string s, word;
char c;

int main(){
	while (getline(cin,s) && s!="*"){
		t=1;
		c=tolower(s[0]);
		for (i=1;i<s.length();i++) if (s[i]==' ' && tolower(s[i+1])!=c) t=0;//,cout<<i<<" "
		cout<<(t?"Y":"N")<<endl;
	}
	return 0;
}
