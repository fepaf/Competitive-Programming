// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Palíndromo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2795

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<9)
#define INF 0x3f3f3f3f

using namespace std;

int n,k,c[MAX][MAX],memo[MAX][MAX],tam;

int f(int i, int k){
	if (k==0 && i!=tam) return INF;
	if (k==0) return 0;
	if (i==tam) return 0;

	if (~memo[i][k]) return memo[i][k];

	int &ans = memo[i][k];

	ans = INF;

	for (int j=i; j<tam; ++j){
		ans = min(ans, c[i][j]+f(j+1,k-1));
	}

	return ans;
}

string s;


signed main(){_
	while (cin >> n >> k >> s){
		tam = s.size();
		for (int i=0; i<tam; ++i){
			for (int j=0; j<tam; ++j){
				memo[i][j] = -1;
			}
			c[i][i] = 0;
		}

		for (int i=0; i<tam-1; ++i){
			int diff = (s[i]-s[i+1]+26)%26;
			c[i][i+1] = min(diff,26-diff);
		}

		for (int t=2; t<tam; ++t){
			for (int i=0; i+t<tam; ++i){
				int j = i+t , diff = (s[i]-s[j]+26)%26;
				c[i][j] = c[i+1][j-1] + min(diff,26-diff);
				// cout << i << " " << j << " " << c[i][j] << endl;
			}
		}

		cout << f(0,k) << endl;
	}
	return 0;
}

