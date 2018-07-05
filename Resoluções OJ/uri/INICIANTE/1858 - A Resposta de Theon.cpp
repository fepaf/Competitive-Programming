// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: A Resposta de Theon
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1858

#include<bits/stdc++.h>

using namespace std;

int n,i,t[100],menor=0;

int main(){
	ios_base::sync_with_stdio(false);
	cin>>n;
	for (i=0;i<n;i++){
		cin>>t[i];
		if (t[i]<t[menor]) menor=i;
	}
	cout<<menor+1<<endl;
	return 0;
}
