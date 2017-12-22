// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bingo!
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1136

#include<bits/stdc++.h>

using namespace std;

int n,b,bol[91],v[91],resp,i,j;

int main(){
	while ((cin>>n>>b) && (n||b)){
		for (i=b;i--;) cin>>bol[i];
		for (i=0;i<b-1;i++){
			for (j=i;j<b;j++){
				++v[abs(bol[i]-bol[j])];
			}
		}
		for (resp=1,i=n+1;i--;) resp*=(v[i]>0), v[i]=0;
		cout<<(resp?"Y":"N")<<endl;
	}
	return 0;
}
