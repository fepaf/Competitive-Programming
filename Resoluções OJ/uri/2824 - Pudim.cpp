#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (5001)
#define MOD 1000000007
#define i64 unsigned long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define pi 2*acosl(0.0)
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, m, dp[MAX][MAX];
string a, b;

int main(){_
    cin >> a >> b;
    n = sz(a), m = sz(b);
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=m; ++j){
            if (a[i-1] != b[j-1]) dp[i][j] = max(dp[i-1][j], dp[i][j-1]) ;
            else dp[i][j] = dp[i-1][j-1]+1;
        }
    }
    cout << dp[n][m] << endl;
}
