#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF (2e18)
#define MAX (1<<20)
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: String Removal
Link: https://cses.fi/problemset/task/1149
*/
 
string s;
i64 n, dp[MAX], last[26];

int main(){_
    cin >> s;
    n = sz(s);
    s = '#'+s;
    dp[0] = 1;
    memset(last,-1,sizeof(last));
    for (int i=1; i<=n; ++i){
        dp[i] = (dp[i-1]<<1)%MOD;
        if (~last[s[i]-'a']){
            dp[i] = (dp[i] - dp[last[s[i]-'a']] + MOD)%MOD;
        }
        last[s[i]-'a'] = i-1;
    }
    cout << ((dp[n]+MOD-1)%MOD) << endl;
    return 0;     
}
