// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Andando no Tempo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2235

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 11234

using namespace std;

int a,b,c;

int main(){_
	while (cin>>a>>b>>c) cout<<((a==b) || (c==b) || (a==c) || (a+b==c) || (a+c==b) || (c+b==a) ? "S" : "N")<<endl;
	return 0;
}
