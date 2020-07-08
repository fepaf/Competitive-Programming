// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Números de Ahmoc
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2049

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int mask[11],r,h,m,n,ans;
string t,a;

int main(){_
	while ((cin>>a)&&(a!="0")){
		cin>>t;
		m=a.size(), n=t.size();
		
		r=~1;
		for (int i=0;i<10;i++) mask[i]=~0;
		for (int i=0;i<m;i++) mask[a[i]-'0'] &=~(1<<i);
		
		ans=0;
		for (int i=0;i<n;i++){
			r|=mask[t[i]-'0'];
			r<<=1;
			ans|=(!(r&(1<<m)));
		}
		
		if (h) cout<<endl;
		cout<<"Instancia "<<++h<<(ans ? "\nverdadeira" : "\nfalsa")<<endl;
	}
	return 0;
}
