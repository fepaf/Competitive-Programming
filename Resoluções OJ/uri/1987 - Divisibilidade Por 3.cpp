// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Divisibilidade Por 3
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1987

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

long long n,m,sd;

int main(){_
	while (cin>>n>>m){
		for (sd=0; m; m/=10) sd+=m%10;
		cout<<sd<<" "<<(sd%3 ? "nao" : "sim")<<endl;
	}
    return 0;
}
