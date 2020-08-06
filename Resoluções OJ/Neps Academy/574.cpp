#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define i64 long long
#define INF 1234567890
#define MAX (10001)
#define sz(x) (int)((x).size())
#define ii pair<int, int>
#define fs first
#define sc second
#define vi vector<int>
#define vii vector<ii>
#define eb emplace_back
#define pb push_back

using namespace std;

int a[MAX], n, k, c, dp[MAX][MAX];

int main(){_
    cin >> n >> k >> c;
    for (int i=0; i<=k; ++i){
        for (int j=0; j<=n; ++j){
            dp[i][j] = -INF;
        }
    }
    dp[0][0] = 0;
    for (int i=1; i<=n; ++i){
        cin >> a[i];
        dp[0][i] = dp[0][i-1] + a[i];
    }
    for (int i=1; i<=k; ++i){
        for (int j=i*c; j<=n; ++j){
            dp[i][j] = max(dp[i][j-1] + a[j], dp[i-1][j-c]);
        }
    }
    cout << dp[k][n] << endl;
    return 0;
}
