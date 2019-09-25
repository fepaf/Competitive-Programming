#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<15)
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

i64 ssdig[MAX], sdig[MAX], n, q, k, x, b, l;

int main(){_
	sdig[0] = ssdig[0] = 0;
	rep(i,1,MAX){
		sdig[i] = sdig[i-1] + ((int)log10(i)) + 1;
		ssdig[i] = sdig[i] + ssdig[i-1];
//		if (i<=110) cout << i << ' ' <<  log10(i) << ' ' << sdig[i] << ' ' << ssdig[i] << endl;
	}
	while (cin >> q){
		while (q--){
			cin >> k;
			b = lower_bound(ssdig, ssdig + MAX, k) - ssdig;
			k -= ssdig[b-1];
			l = lower_bound(sdig, sdig + MAX, k) - sdig;
			k -= sdig[l-1];
			int t = log10(l)+1;
			rep(i,0,t-k){
				l /= 10;
			}
			cout << (l%10) << endl;
		}
		cout << endl;
	}
	return 0;
}
