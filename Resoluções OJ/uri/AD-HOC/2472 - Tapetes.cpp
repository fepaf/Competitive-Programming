// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tapetes
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2472

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define int long long

using namespace std;

int l,n;

signed main(){_
	while (cin >> l >> n){
		cout << (l-n+1)*(l-n+1)+n-1 << endl;
	}
	return 0;
}
