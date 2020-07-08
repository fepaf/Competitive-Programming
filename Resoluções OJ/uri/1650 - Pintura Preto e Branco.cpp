// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pintura Preto e Branco
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1650

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long n,m,c;

int main() {_
	while ((cin>>n>>m>>c)&&(n||m||c)){
	    cout<<(((n-7)*(m-7))/2 +((((n-7)*(m-7))%2) && c))<<endl;
	}
	return 0;
}
