// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sanduicheiche
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2153

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string word,ans;
int i,tam;

int main(){_
	while (cin>>word){
		tam=(int)word.size();
		ans=word;
		for (i=1;tam-2*i>-1;i++) ans=(word.substr(tam-2*i,i)==word.substr(tam-i,i) ? word.substr(0,tam-i) : ans);//cout<<"::"<<word.substr(tam-2*i,i)<<" - "<<word.substr(tam-i,i)<<endl;
		cout<<ans<<endl;
	}
	return 0;
}
