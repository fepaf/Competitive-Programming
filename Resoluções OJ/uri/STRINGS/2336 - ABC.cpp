// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: ABC
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2336

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD 1000000007

using namespace std;

string s;
int i,t;
long long ans;

int main(){_
	while (cin>>s){
		t=s.size();
		for (ans=i=0;i<t;i++) ans=((ans*26)%MOD + s[i]-'A')%MOD;
		cout<<ans<<endl;
	}
	return 0;
}
