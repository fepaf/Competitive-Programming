// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Número Perfeito
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1164

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

int n,i,s,x;

int main(){_
	cin>>n;
	while (n--){
		cin>>x;
		for (s=1,i=2;i*i<=x;i++) s+=(x%i==0)*(i + x/i);
		if ((i-1)*(i-1)==x) s-=(i-1);
		cout<<x<<(s==x ? " eh perfeito" : " nao eh perfeito")<<endl;
	}
	return 0;
}
