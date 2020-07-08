// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Perguntas mais Frequentes
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1553

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,k,i,p,ans;
map<int,int> f;

int main(){_
	while ((cin>>n>>k)&&(n||k)){
		ans=0;
		while (n--){
			cin>>p;
			ans+=((++f[p])==k);
		}
		cout<<ans<<endl;
		ans=0, f.clear();
	}
	return 0;
}
