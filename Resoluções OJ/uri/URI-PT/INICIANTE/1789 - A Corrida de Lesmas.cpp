// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: A Corrida de Lesmas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1789

#include<bits/stdc++.h>

using namespace std;

long long l,v,nivel;

int main(){
	ios_base::sync_with_stdio(false);
	while (cin>>l){
		nivel=0;
		while (l--){
			cin>>v;
			if (v<10) v=1;
			else if (v>=10 && v<20) v=2;
			else v=3;
			nivel=max(v,nivel);
		}
		cout<<nivel<<endl;
	} 
	return 0;
}
