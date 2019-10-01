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

int n, q, l ,r, pos, op;
string s;
char c;
set<int> p[26];

int main(){_
	cin >> s;
	int t = sz(s);
	rep(i, 0, t-1){
		p[s[i]-'a'].insert(i);
	}
	cin >> q;
	while (q--){
		cin >> op;
		if (op == 1){
			cin >> pos >> c;
			--pos;
			p[s[pos]-'a'].erase(pos);
			p[c-'a'].insert(pos);
			s[pos] = c;
		}
		else{
			cin >> l >> r;
			--l, --r;
			int ans = 0;
			rep(i, 0, 25){
				if (sz(p[i]) && p[i].lower_bound(l)!=p[i].end() && (*p[i].lower_bound(l)) <= r) ++ans;
			}
			cout << ans << endl;
		}
	}
	return 0;
}
