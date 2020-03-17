#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (20)
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

int n, a[MAX];
int dp[MAX][1<<MAX];
int ou, msb;

int main(){_
	cin >> n;
	for (int i=n; i--;){
		cin >> a[i];
		ou |= a[i];
		dp[0][a[i]] = 1;
	}
	for (int i=0; i<MAX; i++){
		if (ou & (1<<i)){
			msb = i+1;
		}
	}
	for (int i=1; i<msb; ++i){
		for (int mask=0; mask<(1<<msb); ++mask){
			if (mask & (1<<i)){
				dp[i][mask] = dp[i-1][mask];
			}
			else{
				dp[i][mask] = dp[i-1][mask]+dp[i-1][mask^(1<<i)];
			}
		}
	}
	i64 ans = 0;
	for (int i=n; i--;){
		ans += dp[msb-1][a[i]];
	}
	cout << ans << endl; 
    return 0;
}
