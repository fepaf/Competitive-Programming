#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define INF 0x3f3f3f3f
#define MAX (1<<10)
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

int t,n,sum,a[MAX],ans,i,j,m,sinal,s[MAX];

int main(){_
	for (cin >> t; t--;){
		cin >> n;
		sum = 0;
		for (int i=1; i<=n; ++i){
			cin >> a[i];
			sum += a[i];
		}
		m = 0;
		for (int i=1; i<=n; ++i){
			++m;
			s[m] = a[i];
			while (m >= 3 && s[m-2] <= s[m-1] && s[m-1] >= s[m]){
				s[m-2] += (s[m] - s[m-1]);
				m -= 2;
			}
		}
		ans = 0;
		sinal = 1;
		i = 1; j = m;
		while (i <= j){
			if (s[i] >= s[j]){
				ans += sinal*s[i];
				++i;
			}
			else {
				ans += sinal*s[j];
				--j;
			}
			sinal = -sinal;
		}

		cout << ans << endl;

	}
	return 0;
}
