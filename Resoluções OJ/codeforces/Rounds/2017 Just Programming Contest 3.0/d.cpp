#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define INF 0x3f3f3f3f
#define MAX (10123)
#define fs first
#define sc second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define eb emplace_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define lsb(x) (x & -x)

using namespace std;

int t,n,memo[7][MAX];
string s;

int f(int face,int sum){
	if (sum < 0) return INF;
	if (sum == 0) return (face == 1 ? 0 : INF);

	if (~memo[face][sum]) return memo[face][sum];

	int ans = INF;
	for (int i=1; i<=6; ++i){
		if (i==face || (i+face==7)) continue;
		ans = min(ans, f(i,sum-face) + 1);
	}

	return memo[face][sum] = ans;
}

int ans;

int main(){_
	for (cin >> t; t--;){
		memset(memo,-1,sizeof(memo));

		cin >> n;

		ans = INF;
		for (int face=1; face<=6; ++face){
			ans = min(ans, f(face,n));
		}

		cout << (ans < INF ? ans : -1) << endl;
	}
	return 0;
}
