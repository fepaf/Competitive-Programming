#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

string s;
int mask[21][MAX];
int dp[MAX], ones[MAX];
int n;

int main(){_
	while (cin >> s){
		n = sz(s);
		s = '#' + s;
		for (int t=1; t<=20; ++t){
			for (int i=1; i<=n; ++i){
				mask[t][i] = mask[t-1][i-1] | (1 << (s[i]-'a'));
				if (ones[mask[t-1][i-1]] == t-1 && mask[t][i] > mask[t-1][i-1]) ones[mask[t][i]] = t;
			}
		}

		for (int msk=0; msk<(1<<20); ++msk){
			dp[msk] = ones[msk];
		}

		for (int i=0; i<20; ++i){
			for (int msk = 0; msk < (1<<20); ++msk){
				if (msk & (1<<i)){
					dp[msk] = max(dp[msk], dp[msk^(1<<i)]);
				}
			}
		}

		int ans = 0;
		for (int msk=0; msk<(1<<20); ++msk){
			if (ones[msk]) ans = max(ans, ones[msk]+dp[msk^((1<<20)-1)]);
		}

		cout << ans << endl;
	}
	return 0;
}
