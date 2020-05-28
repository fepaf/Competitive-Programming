#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<9)
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

int n, a[MAX], dp[2][MAX], s;

int main(){_
    cin >> n;
    for (int i=1;i<=n;++i){
        cin >> a[i];
    }
    for (int i=1; i<=n; ++i){
        for (int j=2; j--;){
            if (a[i] != j+1){
                dp[j][i] = max(dp[j^1][i-1]+1, dp[j][i-1]);
            }
            else {
                dp[j][i] = dp[j][i-1];
            }
        }
    }

    cout << max(dp[0][n], dp[1][n]) << endl;
    return 0;
}
