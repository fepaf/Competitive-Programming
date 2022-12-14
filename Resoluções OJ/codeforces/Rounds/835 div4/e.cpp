#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define OUT MAX
#define MOD 1000000007
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
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

i64 t, n, a[MAX], s0[MAX], p1[MAX], ans, diff;

int main(){_
    for (cin >> t; t--;){
        cin >> n;
        ans = 0;
        for (int i=1; i<=n; ++i){
            cin >> a[i];
            p1[i] = p1[i-1]+a[i];
            ans += (!a[i])*p1[i];
        }
        s0[n+1] = 0;
        for (int i=n; i>=1; --i){
            s0[i] = s0[i+1] + (!a[i]);
        }
        diff = 0;
        for (int i=1; i<=n; ++i){
            diff = max(diff, a[i] ? p1[i-1]-s0[i+1] : s0[i+1]-p1[i-1]);
        }
        cout << ans + diff << endl;
    }
    return 0;
}
