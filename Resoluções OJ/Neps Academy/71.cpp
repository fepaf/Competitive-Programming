#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<13)
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

i64 s, dp[6][MAX], n[6], moeda[]={2,5,10,20,50,100}, v;

i64 f(i64 idx,i64 sum){
    
    if (sum < 0) return 0;

    if (idx == 6) return sum == 0;
    
    if (~dp[idx][sum]) return dp[idx][sum];

    dp[idx][sum] = 0;
    for (i64 i=0; i<=n[idx]; ++i){
        dp[idx][sum] += f(idx+1, sum-i*moeda[idx]);
    }

    return dp[idx][sum];
}

int main(){_
    cin >> s >> n[0] >> n[1] >> n[2] >> n[3] >> n[4] >> n[5];

    memset(dp,-1, sizeof(dp));

    cout << f(0,s) << endl;
    return 0;
}
