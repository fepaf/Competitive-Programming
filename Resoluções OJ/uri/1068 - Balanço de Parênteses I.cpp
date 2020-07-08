// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Balanço de Parênteses I
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1068

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

string s;
int ok,par;

int main(){
	while (getline(cin,s)){
		ok=1;
		par=0;
		for (int i=0;i<=s.length();i++){
			if (s[i]=='(') par++;
			else if (s[i]==')') par--;
			ok*=(par>=0);
		}
		cout<<(!par && ok? "correct":"incorrect")<<endl;
	}
	return 0;
}
