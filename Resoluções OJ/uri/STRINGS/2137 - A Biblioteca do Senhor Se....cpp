// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: A Biblioteca do Senhor Se...
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2137

#include<bits/stdc++.h>
#define MAXN 1<<10
using namespace std;

string cad[MAXN];
int n;

int main(){
	while (cin>>n){
		for (int i=n;i--;) cin>>cad[i];
		sort(cad, cad+n);
		for (int i=0;i<n;i++)cout<<cad[i]<<endl;
	}
	return 0;
}
