// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fatorial
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1936

#include<bits/stdc++.h>

using namespace std;

int i,j,f,fat[8],n,resp=0;

int main(){
	ios_base::sync_with_stdio(false);
	for (f=i=1;i<=8;i++) f*=i , fat[i-1]=f;
	cin>>n;
	while (n){
		for (i=8;i--;){
			if (fat[i]<=n){
				n-=fat[i];
				break;
			}
		}
		++resp;
	}
	cout<<resp<<endl;
	return 0;
}
