// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Crescimento Populacional
// Nível: 2
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1160

#include<bits/stdc++.h>

using namespace std;

long long t,pa,pb,i;
double ga,gb;

int main(){
	cin>>t;
	while(t--){
		cin>>pa>>pb>>ga>>gb;
		for (i=0;pa<=pb && i<101;i++){
			pa+=(ga/100.0)*pa;
			pb+=(gb/100.0)*pb;
		}
		if (i==101) cout<<"Mais de 1 seculo."<<endl;
		else cout<<i<<" anos."<<endl;
	}
	return 0;
}
