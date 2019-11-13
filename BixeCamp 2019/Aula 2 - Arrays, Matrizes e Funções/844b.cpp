#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<10)
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

i64 n, m, mat[MAX][MAX], hor, vert;

signed main(){_
	cin >> n >> m;
	for (i64 i=0; i<n; ++i){
		for (i64 j=0; j<m; ++j){
			cin >> mat[i][j];
			mat[j][n] = -1;
		}
		mat[i][m] = -1;
	}
	for (i64 i=0; i<=n; ++i){
		hor = 1;
		for (i64 j=0; j<=m; ++j){
			if (mat[i][j] == mat[i][(j-1+m)%m]){
				++hor;
			}
			else {
				hor = 1;
				ans += (hor * (hor+1))/2;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
