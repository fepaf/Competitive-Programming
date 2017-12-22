// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Azulejos
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1512

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int n,a,b;

int main(){_
	while ((cin>>n>>a>>b)&&(n||a||b)) cout<<((n/a)+(n/b)-(n/((a*b)/__gcd(a,b))))<<endl;
	return 0;
}
