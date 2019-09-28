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
#define rep(i,a,b) for (int (i)=(a); (i)<=(b); ++(i))

using namespace std;

i64 pot10[1<<5], n, q, k, x, b, l, t;

i64 sumto(i64 n, int op){
	i64 sum = 0LL;
	for (i64 idx = 0; n >=  pot10[idx]; ++idx){
		i64 digs = (n - (pot10[idx] - 1));
		sum += (op ? (digs*(digs+1))/2 : digs);
	}
	return sum;
}

int main(){_
	pot10[0] = 1;
	rep(i,1,18){
		pot10[i] = pot10[i-1]*10;
	}
	while (cin >> q){
		while (q--){
			cin >> k;
			
			i64 lo = 1LL, hi = 5e8;
			while (lo < hi){
				i64 mid = lo + (hi - lo)/2;
				if (sumto(mid, 1) >= k) hi = mid;
				else lo = mid + 1;
			}
			k -= sumto(lo-1, 1);

			b = lo;
			lo = 1LL, hi = b;
			while (lo < hi){
				i64 mid = lo + (hi - lo)/2;
				if (sumto(mid, 0) >= k) hi = mid;
				else lo = mid + 1;
			}
			k -= sumto(lo-1, 0);
			
			n = lo;
			
			t = log10(n)+1;
			rep(i,1,t-k){
				n /= 10;
			}

			cout << (n%10) << endl;
		}
		cout << endl;
	}
	return 0;
}
