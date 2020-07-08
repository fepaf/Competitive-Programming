// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fazendo Nada
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1989

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 100123

using namespace std;

unsigned long long n,m,i,c,pref,ans;

int main(){_
	while ((cin>>n>>m)&&(n+1 || m+1)){
		for (pref=ans=0,i=1;i<=n;i++){
			cin>>c;
			pref+=c;
			ans+=pref;
		}
		cout<<ans*m<<endl;
	}
	return 0;
}
