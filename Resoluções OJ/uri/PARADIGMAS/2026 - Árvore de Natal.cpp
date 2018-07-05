// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Árvore de Natal
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2026

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

int g,p,w,e[102],pc[102],best[101][1001],i,j,test;

int main(){
	cin>>g;
	for (test=1;test<=g;test++){
		cin>>p>>w;
		for (i=1;i<=p;i++) cin>>e[i]>>pc[i];
		for (i=0;i<=w;i++) best[0][i]=0;
		for (i=1;i<=p;i++){
			best[i][0]=0;
			for (j=0;j<=w;j++) {
				if (j>=pc[i]){
					if (best[i-1][j-pc[i]]+e[i]>best[i-1][j]) best[i][j]=best[i-1][j-pc[i]]+e[i];
					else best[i][j]=best[i-1][j];
				}
				else best[i][j]=best[i-1][j];
			}
		}
		cout<<"Galho "<<test<<":\nNumero total de enfeites: "<<best[p][w]<<endl<<endl;
	}
	return 0;
}
