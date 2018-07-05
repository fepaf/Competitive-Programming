// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Substituição em Vetor I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1172

#include<bits/stdc++.h>

using namespace std;

long long x[10],i;

int main(){
	for (i=0;i<10;i++){
		cin>>x[i];
		x[i]=(x[i]>0?x[i]:1);
	}
	for (i=0;i<10;i++) cout<<"X["<<i<<"] = "<<x[i]<<endl;
	return 0;
}
