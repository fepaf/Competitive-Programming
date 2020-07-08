// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Selos
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2402

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);
 
using namespace std;
 
unsigned long long n,i,p;
 
int main(){_
	cin>>n;
	if (n%2==0 && n!=2) p=0;
	else {
		for (p=1,i=3;i*i<=n;i+=2) p*=(n%i!=0);
	}
	cout<<(p ? "N" : "S")<<endl;
	return 0;
} 
