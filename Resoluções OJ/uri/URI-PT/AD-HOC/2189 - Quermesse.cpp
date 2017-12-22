// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Quermesse
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2189

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int n,test,x,ans;

int main(){_
	while((cin>>n)&&n){
		for (int i=1;i<=n;i++){
			cin>>x;
			if (x==i) ans=i;
		}
		cout<<"Teste "<<++test<<endl;
		cout<<ans<<endl<<endl;
	}
	return 0;
}
