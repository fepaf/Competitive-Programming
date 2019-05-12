#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define eb emplace_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define lsb(x) (x & -x)

using namespace std;


int n,s,a[300123],f[2][MAX];
i64 ans;

int main(){_

	while (cin >> n){
		f[0][0] = 1;
		s = ans = 0;

		for (int i=1; i<=n; ++i){
			cin >> a[i];
			s ^= a[i];
			ans += f[i&1][s];
			++f[i&1][s];
		}

		cout << ans << endl;
	}

	return 0;
}
