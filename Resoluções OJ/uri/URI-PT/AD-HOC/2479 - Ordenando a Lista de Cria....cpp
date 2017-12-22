// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ordenando a Lista de Cria...
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2479

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,i,boas;

string sinal,nome[100];

int main(){_
	cin>>n;

	for(i=n;i--;){
		cin>>sinal>>nome[i];
		boas+=(sinal=="+");
	}
	sort(nome,nome+n);
	for(i=0;i<n;i++) cout<<nome[i]<<endl;
	cout<<"Se comportaram: "<<boas<<" | Nao se comportaram: "<<(n-boas)<<endl;
	return 0;
}

