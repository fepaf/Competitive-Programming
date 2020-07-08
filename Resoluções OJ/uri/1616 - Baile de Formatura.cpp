// Autor: Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Baile de Formatura
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1616

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<10)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))

using namespace std;

i64 dp[MAX][MAX], b, g;

int main(){_
    for (int i=1; i<MAX; ++i){
        dp[i][1] = 1;
        for (int j=2; j<=i; ++j){
            dp[i][j] = (j*(dp[i-1][j-1] + dp[i-1][j]))%MOD;
        }
    }
    while ((cin >> b >> g) && (b || g)){
        cout << dp[b][g] << endl;
    }
    return 0;
}
