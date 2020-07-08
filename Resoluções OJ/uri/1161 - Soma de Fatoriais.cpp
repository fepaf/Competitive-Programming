// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Soma de Fatoriais
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1161

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long fat(long long x){return x ? x*fat(x-1) : 1;}

long long n,m;

int main(){_
	while (cin>>n>>m) cout<<fat(n)+fat(m)<<endl;
	return 0;
}

