// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Matriz 123
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1534

#include<bits/stdc++.h>

using namespace std;

long long n;

int main(){
	ios_base::sync_with_stdio(false);
	while ((cin>>n)){
		for (int i=0;i<n;i++){
			for (int j=0;j<n;j++){
				if (i+j==n-1) cout<<"2";
				else if (i==j) cout<<"1";
				else cout<<"3";
			}
			cout<<endl;
		}
	}
	return 0;
}
