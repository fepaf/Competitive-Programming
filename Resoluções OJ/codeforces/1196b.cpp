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

using namespace std;

int p, a, q, n, k;
vi pos;

int main(){_
	for (cin >> q; q--;){
		cin >> n >> k;
		p = 0;
		int x = 1;
		for (int i=1; i<=n; ++i){
			cin >> a;
			p ^= (a & 1);
			if (p == x && sz(pos)<k-1){
				x ^= 1;
				pos.eb(i);
			}
		}
		int ans = ((p & 1) == x && sz(pos)==k-1);
		if (ans){
			cout << "YES" << endl;
			for (int ind : pos){
				cout << ind << ' ';
			}
			cout << n << endl;
		}
		else {
			cout << "NO" << endl;
		}
		pos.clear();
	}
	return 0;
}
