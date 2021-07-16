#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF (1LL<<60)
#define MAX (10000005)
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

i64 w, v, n, m, dp[MAX];

int main(){_
    cin >> n >> m;
    dp[0] = 0;
    for (int j=1; j<MAX; ++j){
        dp[j] = INF;
    }
    for (int i=0; i<n; ++i){
        cin >> w >> v;
        for (int j=MAX-1; j>=v; --j){
            dp[j] = min(dp[j], dp[j-v]+w);
        }
    }
    for (int i=MAX-1; i>=0; --i){
        if (dp[i]<=m){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
