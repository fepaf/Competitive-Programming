#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<10) // aproximdamente 1000,
#define i64 long long
#define sz(x) (int)(x).size()
#define fs first
#define sc second
#define pb push_back
#define eb emplace_back
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define all(x) (x).begin(), (x).end()

using namespace std;
/*
dado A[1..N][1..M].
vou colocar varias fitas das posições F[ia..ib][ja..jb]
quero saber a maior quantidade de sobreposição de fitas
ou seja, quero saber a qtd de fitas que tem na posição
do matriz que está coberta por mais fitas
*/

int a[MAX][MAX], psa[MAX][MAX], ia, ja, ib, jb, q, n, m, ans, sub;

int main(){_
    cin >> n >> m >> q;
    while (q--){
        cin >> ia >> ja >> ib >> jb;
        a[ia][ja] += 1;
        a[ia][jb+1] += -1;
        a[ib+1][ja] += -1;
        a[ib+1][jb+1] += +1;
    }
    ans = 0;
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=m; ++j){
            psa[i][j] = a[i][j]+psa[i-1][j]+psa[i][j-1]-psa[i-1][j-1];
            cout << psa[i][j] << ' '; 
            ans = max(ans, psa[i][j]);
        }
        cout << endl;
    }
    cout << ans << endl;
    return 0;        
}