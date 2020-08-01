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
dado A[1..N][1..M] responder qual submatriz
de tamanho LxC com maior soma
complexidade O(NM + Q);
*/

int a[MAX][MAX], psa[MAX][MAX], l, c, n, m, ans, sub;

int main(){_
    cin >> n >> m >> l >> c;
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=m; ++j){
            cin >> a[i][j];
            psa[i][j] = a[i][j]+psa[i-1][j]+psa[i][j-1]-psa[i-1][j-1];
        }
    }
    ans = 0;
    for (int i=l; i<=n; ++i){
        for (int j=c; j<=m; ++j){
            sub = psa[i][j] - psa[i-l][j] - psa[i][j-c] + psa[i-l][j-c];
            ans = max(ans, sub);
        }
    }
    cout << ans << endl;
    return 0;        
}