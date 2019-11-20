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

int n, a[MAX], t, ans, s[MAX];
int lo, mid, hi, ok;

int main(){_
    cin >> n >> t;
    for (int i=1; i<=n; ++i){
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    lo = 0, hi = n+1;
    while (lo < hi){
        mid = lo + (hi - lo)/2;

        ok = 1;
        for (int i=mid; i<=n; ++i){
            ok &= (s[i] - s[i-mid] > t);
        }

        if (ok) hi = mid;
        else lo = mid + 1;
    }
    cout << lo-1 << endl;
	return 0;
}
