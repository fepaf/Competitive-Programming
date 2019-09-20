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

using namespace std;

i64 n, m[MAX][MAX], a[MAX];

int main(){_
	while (cin >> n){
		for (int i=0; i<n; ++i){
			a[i] = 0;
		}
		for (int i=0; i<n; ++i){
			for (int j=0; j<n; ++j){
				cin >> m[i][j];
			}
		}
		a[0] = sqrt((m[0][1]*m[0][2])/m[1][2]); 
		cout << a[0];
		for (int i=1; i<n; ++i){
			a[i] = m[i][i-1]/a[i-1];
			cout << ' ' << a[i];
		}

		cout << endl;
	}
	return 0;
}
