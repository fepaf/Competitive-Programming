// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Galopeira
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2147

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl "\n"

using namespace std;

double t;
string str;
int c;

int main(){_
	cin>>c;
	while (c--){
		cin>>str;
		t=str.size()/100.0;
		printf("%.2lf\n",t);
	}

	return 0;
}
