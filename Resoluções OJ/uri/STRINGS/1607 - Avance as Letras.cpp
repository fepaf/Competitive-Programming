// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Avance as Letras
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1607

#include<bits/stdc++.h>

using namespace std;

int t,sum,i;
string a,b;

int main(){
	cin>>t;
	getline(cin,a);
	while (t--){
		cin>>a>>b;
		for (sum=0,i=b.length();i--;) sum+=(b[i]-a[i]+26)%26;
		cout<<sum<<endl;
	}
	return 0;
}
