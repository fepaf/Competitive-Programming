#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<9)
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

int n, k, a[MAX];
int dp[MAX][MAX];
int c[MAX][MAX];
int s[MAX];

int f(int stacks, int idx){
	if (idx < stacks) return 0;

	if (~dp[stacks][idx]) return dp[stacks][idx];

	dp[stacks][idx] = INF;
	rep(i, 1, idx-1){
		dp[stacks][idx] = min(dp[stacks][idx], dp[stacks-1][i] + c[i+1][idx]);
	}

	return dp[stacks][idx];
}

int main(){_
	cin >> n >> k;
	
	rep(i, 1, n){
		cin >> a[i];
	}

	for (int i=1; i<=n; ++i){
		for (int j=1; j<i; ++j){
			c[j][i] = a[j]*(i-j);
		}
	}
	
	memset(dp, -1, sizeof(dp));

	cout << f(k, n) << endl;

	return 0;
}
