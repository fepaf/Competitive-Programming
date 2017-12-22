// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Validador de Senhas
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2253

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string s;
int t,ans,num,high,low,def,i;

int main(){_
	while (getline(cin,s)){
		t=s.size();
		for (num=high=low=def=i=0;i<t;i++){
			if ('a'<=s[i] && s[i]<='z') low=1;
			else if ('A'<=s[i] && s[i]<='Z') high=1;
			else if ('0'<=s[i] && s[i]<='9') num=1;
			else def=1;
		}
		cout<<"Senha "<<(high && low && num && !def && 6<=t && t<=32 ? "valida." : "invalida.")<<endl;
	}
	return 0;
}
