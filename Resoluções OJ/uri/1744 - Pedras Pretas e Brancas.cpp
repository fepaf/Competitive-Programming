// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pedras Pretas e Brancas
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1744

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define MAX 5123
#define INF (1LL<<60)

using namespace std;

string s;
i64 a,b,qb,falta,tam,atual,prox,ans;

int main(){_
	while (cin >> a >> b){
		cin >> s;
		qb = 0; ans = INF;
		for (char c : s){
			qb += (c=='B');
		}
		for (int caro = 0; caro <= qb; ++caro){
			falta = qb - caro;
			prox = caro;
			tam = s.size();
			atual = a*caro;
			for (int i = 0; i<tam && falta; ++i){
				if (s[i]=='B'){
					atual += (a-b)*(i-prox)*(i>prox);
					++prox , --falta;
				}
			}
			ans = min(ans,atual);
		}
		cout << ans << endl;
	}
	return 0;
}

