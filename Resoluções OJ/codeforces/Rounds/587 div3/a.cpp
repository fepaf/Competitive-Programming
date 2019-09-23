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
#define rep(i,a,b) for (int (i)=(a); (i)<(b); ++(i))

using namespace std;

int ans,f[1<<8],n;
string s, r;

int main(){_
	while (cin >> n >> s){
		r = s;
		ans = 0;
		for(int i=0; i<n; ++i){
			if (i % 2){
				if (s[i] == s[i-1]){
					r[i] = (s[i]=='a' ? 'b' : 'a');
					++ans;
				}
			}
		}
		cout << ans << endl << r << endl;
	}
	return 0;
}
