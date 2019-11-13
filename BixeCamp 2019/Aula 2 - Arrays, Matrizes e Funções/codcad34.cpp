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

int n, m[1<<10][1<<10], sl[1<<10], sc[1<<10], dp, ds;

int main(){_
	cin >> n; 
	for (int i=0; i<n; ++i){
		for (int j=0; j<n; ++j){
			cin >> m[i][j];
			sl[i] += m[i][j];
			sc[j] += m[i][j];
		}
		dp += m[i][i];
		ds += m[i][n-1-i];
	}
	int ans = (dp == ds);
	for (int i=0; i<n; ++i){
		ans &= (sl[i] == dp && sc[i] == ds);
	}
	cout << (ans ? dp : -1) << endl;
	return 0;
}
