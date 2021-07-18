#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX 3002
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

using namespace std;

i64 n, dp[MAX], p[MAX];
string s;

int main(){_
    cin >> n >> s;
    dp[1] = 1;
    for (int t=2; t<=n; ++t){
        for (int l=1; l<=n; ++l){
            p[l] = p[l-1] + dp[l];
        }
        for (int l=1; l<=t; ++l){
            dp[l] = (s[t-2]=='<') ? (p[l-1]-p[0]) : (p[n]-p[l-1]);
            dp[l] = (dp[l]+MOD)%MOD;
        }
    }
    i64 ans = 0;
    for (int i=1; i<=n; ++i){
        ans += dp[i];
    }
    ans %= MOD;
    cout << ans << endl;
    return 0;
}
