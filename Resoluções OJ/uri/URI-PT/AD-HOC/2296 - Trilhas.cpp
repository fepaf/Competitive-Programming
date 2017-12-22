// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Trilhas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2296

#include<bits/stdc++.h>

using namespace std;

int n, m, i, j, a, b, melhor_trilha;
long long int esforco1, esforco2,min_esforco;

int main(){
	min_esforco=100123;
	cin>>n;
	for (i=1;i<=n;i++){
		esforco1=esforco2=0;
		cin>>m>>a;
		for (j=1;j<=m-1;j++){
			cin>>b;
			if (a>b) esforco1+=a-b;
			else esforco2+=b-a;
			a=b;
		}
	
		if (esforco1>esforco2) esforco1=esforco2;
		if (esforco1<min_esforco){
			min_esforco=esforco1;
			melhor_trilha=i;
		}
	}
	cout<<melhor_trilha<<endl;
	return 0;
}
