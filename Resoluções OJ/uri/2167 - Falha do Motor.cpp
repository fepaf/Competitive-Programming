// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Falha do Motor
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2167

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int n,ans,r,ant;

int main(){
while(cin>>n){
		cin>>ant;
		ans=0;
		for (int i=2;i<=n;i++,ant=r){
			cin>>r;
			if (r<ant && !ans) ans=i;
		}
		cout<<ans<<endl;
	}
	return 0;
}
