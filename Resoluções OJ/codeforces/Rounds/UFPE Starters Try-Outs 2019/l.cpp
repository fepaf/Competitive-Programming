#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX 10007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))

using namespace std;

struct tlanche{
	int v,w,e;
};

int cmp(tlanche a, tlanche b){
	return a.e > b.e;
}

tlanche lanches[MAX];
int n, q, t, k;
i64 dp[MAX][MAX];

int main(){_
	while (cin >> n >> q){
		for (int i=1; i<=n; ++i){
			cin >> lanches[i].v >> lanches[i].w >> lanches[i].e;
		}
		
		sort(lanches+1, lanches+n+1, cmp);
		
		for (int i=10001; i--;){
			dp[0][i] = 0;
		}
		
		for (int i=1; i<=n; ++i){
			dp[i][0] = 0;
			cout << lanches[i].e << " " << lanches[i].w << " " << lanches[i].v << endl;
			for (int j=1; j<=10000; ++j){
				if (j >= lanches[i].w){
					dp[i][j] = max(dp[i-1][j-lanches[i].w] + lanches[i].v, dp[i-1][j]);
				}
				else {
					dp[i][j] = dp[i-1][j];	
				}
			}
		}
		
		while (q--){
			cin >> t >> k;

			int lo = 1, hi = n;
			while (lo < hi){
				int mid = lo + (hi - lo)/2;
				if (t > lanches[mid].e) hi = mid;
				else lo = mid + 1;
			}
			
			cout << dp[lo][k] << endl;
		}
		
	}
	return 0;
}
