// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Embaralhando
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1980

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

unsigned long long i,f;
string s;

int main(){
	while ((cin>>s) && s!="0"){
		for (f=1,i=1;i<=s.length();i++) f*=i;
		cout<<f<<endl;
	}
	return 0;
}
