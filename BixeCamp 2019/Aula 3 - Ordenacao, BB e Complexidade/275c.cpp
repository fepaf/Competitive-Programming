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

i64 n, k;
i64 a[MAX], forbiden[MAX];
i64 lo, hi, ans;

int main(){_
    cin >> n >> k;
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    sort(a, a+n);
    lo = 0, ans = n;
    for (int i=0; i<n; ++i){
        if (forbiden[i]) continue;
        while (lo<n && a[lo]<a[i]*k){
            ++lo;
        }
        if (lo>=n) break;
        forbiden[lo] = (k>1 && a[lo]==k*a[i]);
        ans -= (k>1 && a[lo]==k*a[i]);
    }
    cout << ans << endl;
	return 0;
}
