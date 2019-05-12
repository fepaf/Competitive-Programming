#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define i64 long long
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

int t,n,f[1<<8];
string s;

int main(){_
	for (cin >> t; t--;){
		f['b'] = f['k'] = f['l'] = 0;
		for (cin >> n; n--;){
			cin >> s;
			++f[tolower(s[0])];
		}
		cout << min(min(f['l'], f['k']),f['b']/2) << endl;
	}
	return 0;
}
