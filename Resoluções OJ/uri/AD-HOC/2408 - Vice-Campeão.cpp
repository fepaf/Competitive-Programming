// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Vice-Campeão
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2408

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int a, b, c;

int main(){_	
	cin >> a >> b >> c;
	
	if ((b<=a && a<=c) || (c<=a && a<=b)){
		cout << a << endl;
	}
	else if ((a<=b && b<=c) || (c<=b && b<=a)){
		cout << b << endl;
	}
	else {
		cout << c << endl;
	}
	
	return 0;
}
