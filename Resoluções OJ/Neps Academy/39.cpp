#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<10)
#define MOD (1000000007)
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

int n, k, dp[MAX][MAX];

int main(){_
    cin >> n >> k;
    for (int i=0; i<k; ++i){
        dp[n][i] = 1;
    }
    for (int i=n; i--;){
        for (int j=k; j--;){
            dp[i][j] = (dp[i+1][j+1] + dp[i+1][0]) % MOD;
        }
    }
    cout << dp[0][0] << endl;
    return 0;
}
