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

i64 n, m, diff;
i64 a[MAX];
i64 ab[MAX], ai[MAX], ib[MAX];
i64 menor, maior, ans[MAX];

int main(){_
	cin >> n >> m;

	rep(i, 0, m-1){
		cin >> a[i];
		if (i) {
			ans[1] += abs(a[i] - a[i-1]);
			if (a[i] != a[i-1]){
				menor = min(a[i], a[i-1]) , maior = max(a[i], a[i-1]);
				if (maior - menor > 1) --ab[menor+1], ++ab[maior];
				ai[maior] += 2*menor - maior;
				ib[menor] += (menor -1);
			}
		}
	}

	rep(i, 1, n){
		ab[i] += ab[i-1];
	}

	rep(i, 2, n){
		ans[i] = ans[1];
		ans[i] += ai[i];
		ans[i] += ab[i];
		ans[i] += ib[i];
	}

	rep(i, 1, n){
		cout << ans[i] << ' ';
	}
	cout << endl;

	return 0;
}
