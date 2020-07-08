// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Festival das Noites Brancas
// Nível: 4
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1202

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int t,i,r,a1,a2,fib[1500],tam;
string n;

int main(){_
	for (a1=1,a2=i=0;i<1500;i++){
		fib[i]=(a1+a2)%1000;
		a1=a2;
		a2=fib[i];
	}
	cin>>t;
	while (t--){
		cin>>n;
		tam=n.size();
		for (r=i=0;i<tam;i++) r=((r<<1)+(n[i]-'0'))%1500;
		cout.fill('0');
		cout<<setw(3)<<fib[(r+1499)%1500]<<endl;
	}
	return 0;
}
