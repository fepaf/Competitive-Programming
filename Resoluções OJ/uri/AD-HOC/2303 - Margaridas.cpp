// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Margaridas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2303

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<10)

using namespace std;

int camp[MAX][MAX], l, c, m, n, dp[MAX][MAX], ans;

int main(){_
    while (cin >> l >> c >> m >> n){
        for (int i=1; i<=l; ++i){
            for (int j=1; j<=c; ++j){
                cin >> camp[i][j];
                dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + camp[i][j];
            }
        }
        ans = 0;
        for (int i=m; i<=l; i += m){
            for (int j=n; j<=c; j += n){
                ans = max(ans, dp[i][j] - dp[i][j-n] - dp[i-m][j] + dp[i-m][j-n]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}

