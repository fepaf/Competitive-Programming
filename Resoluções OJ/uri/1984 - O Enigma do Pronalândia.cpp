// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Enigma do Pronalândia
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1984

#include<bits/stdc++.h>

using namespace std;

long long n,m,chos;
float nota,maior=-1;

int main(){
	ios_base::sync_with_stdio(false);
	cin>>n;
	while (n){
		cout<<n%10;
		n/=10;
	}	
	cout<<endl;
	return 0;
}
