#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<12)
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
#define rep(i,a,b) for (int (i)=(a); (i)<=(b); ++(i))
#define repi(i,a,b) for (int (i)=(a); (i)>=(b); --(i))

using namespace std;

int n, a, b, c;
int dp[MAX];

int f(int idx){
    if (idx == 0) return 0;

    if (idx < 0) return -INF;

    if (~dp[idx]) return dp[idx];
    
    return dp[idx] = max(max(f(idx-a), f(idx-b)) , f(idx-c)) + 1;
}

int main(){_
    cin >> n >> a >> b >> c;
    for (int i=0; i<=n; ++i){
        dp[i] = -1;
    }
    cout << f(n) << endl;
	return 0;
}
