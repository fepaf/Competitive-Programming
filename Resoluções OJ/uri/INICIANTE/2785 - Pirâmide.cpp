// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pirâmide
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2785

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<7)
#define INF 0x3f3f3f3f

using namespace std;

int n, a[MAX][MAX], psum[MAX][MAX], memo[MAX][MAX][MAX];

int f(int linha, int l, int r){

	if (linha == n) return psum[n][n];

	if (l<1 || r>n) return INF;

	if (~memo[linha][l][r]) return memo[linha][l][r];

	return memo[linha][l][r] = (psum[linha][r]-psum[linha][l-1]) + min(f(linha+1,l-1,r), f(linha+1,l,r+1));
}

int main(){_
	while (cin >> n){
		for (int i=1; i<=n; ++i){
			for (int j=1; j<=n; ++j){
				cin >> a[i][j];
				psum[i][j] = psum[i][j-1] + a[i][j];
			}
		}

		for (int i=1; i<=n; ++i){
			for (int j=1; j<=n; ++j){
				for (int k=1; k<=n; ++k){
					memo[i][j][k] = -1;
				}
			}
		}

		int ans = INF;
		for (int i=1; i<=n; ++i){
			ans  = min(ans, f(1,i,i));
		}

		cout << ans << endl;
	}
	return 0;
}

