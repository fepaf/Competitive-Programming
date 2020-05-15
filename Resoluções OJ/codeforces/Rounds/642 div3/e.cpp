#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (int)(1e6+3)
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

int t;
int n, k, r[MAX], tot, ans;
string s, g[MAX];
int dp[MAX][3], tam, cust;

int main(){_
    cin >> t;
    while (t--){
        cin >> n >> k >> s;
        tot = 0;
        for (int i=0; i<k; ++i){
            r[i] = 0;
        }
        for (int i=0; i<n; ++i){
            r[i%k] += (s[i]=='1');
            g[i%k] += s[i]; 
            tot += (s[i]=='1');
        }
        ans = INT_MAX;
        for (int i=0; i<k; ++i){
            
            tam = sz(g[i]);
            dp[tam][0] = dp[tam][1] = dp[tam][2] = 0;
            for (int j=tam; j--;){
                dp[j][0] = min(dp[j+1][0]+(g[i][j]=='1'), dp[j+1][1]+(g[i][j]=='0'));
                dp[j][1] = min(dp[j+1][1]+(g[i][j]=='0'), dp[j+1][2]+(g[i][j]=='1'));
                dp[j][2] = dp[j+1][2]+(g[i][j]=='1');
            }

            cust = min(dp[0][0], min(dp[0][1], dp[0][2]));
            ans = min(ans, tot-r[i]+cust);

            g[i] = "";
        }
        cout << ans << endl;
    }
    return 0;
}