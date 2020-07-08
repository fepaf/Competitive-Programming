// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Cara ou Coroa
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1329

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long n,r,c;

int main(){_
	while ((cin>>n) && n) {
		c=0;
		for (int i=n;i--;){
			cin>>r;
			c+=r;
		}
		cout<<"Mary won "<<n-c<<" times and John won "<<c<<" times"<<endl;
	}
	
	return 0;
}
