#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define OUT MAX
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
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define WS(x) cerr << "\033[31m" << x << "\033[0m" << ' ';
#define SS cerr << endl;

using namespace std;

int n, m, p, x, y;

int main(){_
    cin >> n >> m >> p;
    int dp[n+1][m+1];
    for (int i=0; i<=n; ++i){
        for (int j=0; j<=m; ++j){
            dp[i][j] = 0;
        }
    }
    while (p--){
        cin >> x >> y;
        dp[y][x] = 1;
    }
    dp[0][1] = 1;
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=m; ++j){
            // WS(dp[i][j])
            if (dp[i][j]){
                dp[i][j] = (dp[i-1][j] + dp[i][j-1])%MOD;
            } 
        }
        // SS
    }
    cout << dp[n][m] << endl;
    return 0;
}
