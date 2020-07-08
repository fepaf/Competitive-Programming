// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: MacPRONALTS
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1985

#include<bits/stdc++.h>

using namespace std;

long long n,p,q;
float val=0;

int main(){
	ios_base::sync_with_stdio(false);
	cin>>p;
	while (p--){
		cin>>n>>q;
		val+=(n-999.5)*q;
	}	
	printf("%.02f\n",val);
	return 0;
}
