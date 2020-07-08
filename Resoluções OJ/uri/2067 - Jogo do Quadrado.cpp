// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jogo do Quadrado
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2067

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1<<8
#define min(a,b,c) min(min((a),(b)),(c))

using namespace std;

int n, m, s, q, big, ans[MAX], t[MAX][MAX], dp[MAX][MAX];

int main(){_
    cin >> n >> m;
    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            cin >> t[i][j];
        }
    }

    for (int i=0; i<n; ++i){
        dp[i][0] = (t[i][0]!=0);
    }

    for (int i=0; i<m; ++i){
        dp[0][i] = (t[0][i]!=0);
    }

    big = 0;
    for (int i=1; i<n; ++i){
        for (int j=1; j<m; ++j){
            dp[i][j] = min(dp[i-1][j] , dp[i][j-1], dp[i-1][j-1])+1;
            if (!t[i][j]) dp[i][j] = 0;
            big = max(big, dp[i][j]);
        }
    }

    for (cin >> q; q--;){
        cin >> s;
        cout << (s <= big ? "yes" : "no") << endl;
    }

    return 0;
}

