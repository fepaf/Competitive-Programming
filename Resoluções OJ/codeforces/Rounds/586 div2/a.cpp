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

int n, f[1<<8];
string s;

int main(){_
	while (cin >> n >> s){
		memset(f,0,sizeof(f));
		for (auto c : s){
			++f[c];
		}
		while (f['n']--){
			cout << 1 << ' ';
		}
		while (f['z']--){
			cout << 0 << ' ';
		}
		cout << endl;
	}
	return 0;
}
