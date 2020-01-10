#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define i64 long long
#define int i64
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

int t, n;
int a[MAX];
int yt, at, pc, kd;

signed main(){_
    for (cin >> t; t--;){
        cin >> n;
        yt = at = kd = pc = 0;
        for (int i=0; i<n; ++i){
            cin >> a[i];
            yt += a[i];
            if (i ==0 ) continue;
            pc = max(pc+a[i], a[i]);
            kd = max(kd, pc);
        }
        at = kd;
        kd = pc = 0;
        for (int i=0; i<n-1; ++i){
            pc = max(pc+a[i], a[i]);
            kd = max(kd, pc);
        }
        at = max(at,kd);
        cout << (yt > at ? "YES" : "NO") << endl; 
    }
	return 0;
}
