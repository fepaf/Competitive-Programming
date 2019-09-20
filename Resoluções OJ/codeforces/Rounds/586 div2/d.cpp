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
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))

using namespace std;

i64 n, b[MAX];

int main(){_
	while (cin >> n){
		vi odd, even;
		for (int i=0; i<n; ++i){
			cin >> b[i];
			if (b[i]&1LL){
				odd.eb(b[i]);
			}
			else{
				even.eb(b[i]);
			}
		}
		if (sz(odd) < sz(even)){
			cout << sz(odd) << endl;
			for (auto x : odd){
				cout << x << ' ';
			}
			cout << endl;
		}
		else {
			cout << sz(even) << endl;
			for (auto x : even){
				cout << x << ' ';
			}
			cout << endl;
		}
	}
	return 0;
}
