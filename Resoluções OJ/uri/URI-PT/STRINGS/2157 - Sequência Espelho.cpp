// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sequência Espelho
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2157

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int b,e,c;
string pre,suf,ans;

string toS(int n){
	string ans="";
	for (;n;n/=10) ans+=((n%10)+'0');
	reverse(ans.begin(),ans.end());
	return ans;
}

int main(){_
	cin>>c;
	while (c--){
		cin>>b>>e;
		pre=suf="";
		for (int i=b;i<=e;i++) suf=suf+toS(i);
		pre=suf;
		reverse(suf.begin(),suf.end());
		ans=pre+suf;
		cout<<ans<<endl;
	}
	return 0;
}
