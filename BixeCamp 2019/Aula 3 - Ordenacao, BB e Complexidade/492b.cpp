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
#define rep(i,a,b) for (int (i)=(a); (i)<=(b); ++(i))
#define repi(i,a,b) for (int (i)=(a); (i)>=(b); --(i))

using namespace std;

int n, l;
long double a[MAX], lo, hi, mid;
int ok;

int main(){_
	scanf("%i %i",&n, &l);
	for (int i=1; i<=n; ++i){
		scanf("%lf",&a[i]);
	}
	a[0] = 0;
	a[n+1] = l;
	sort(a+1, a+n+1);

	lo = max(a[1], l-a[n]), hi = l, mid;
	for (int j=1000; j--;){
		mid = (lo + hi)/2;

		ok = 1;
		for (int i=1; i<=n; ++i){
			ok &= ((a[i] + 2*mid) >= a[i+1]);
		}

		if (ok) hi = mid;
		else lo = mid;
	}
	printf("%.10lf\n",lo);
	return 0;
}
