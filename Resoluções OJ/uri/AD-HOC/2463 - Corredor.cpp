// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Corredor
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2463

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int atual,ans,n,a;

int main(){_
	while (cin >> n){
		atual = ans = 0;
		while (n--){
			cin >> a;
			atual = max(atual+a, a);
			ans = max(ans, atual);
		}
		cout << ans << endl;
	}
	return 0;
}
