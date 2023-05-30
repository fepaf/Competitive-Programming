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

i64 n, a[MAX], t, c, d, lo, hi, md, sum;

int main(){_
    for (cin >> t; t--;){

        cin >> n >> c >> d;
        for (int i=0; i<n; ++i){
            cin >> a[i];
        }

        sort(a,a+n, greater<int>());

        lo = 0; hi = d+2;
        while (lo < hi){
            md = lo + ((hi-lo+1)>>1);

            sum = 0;
            for (int i=0; i<d; ++i){
                sum += i % md < n ? a[i % md] : 0;
            }

            if (sum >= c) lo = md;
            else hi = md - 1;
        }

        if (lo == 0) cout << "Impossible" << endl;
        else if (lo == d+2) cout << "Infinity" << endl;
        else cout << lo-1 << endl;

        for (int i=n; i--;){
            a[i] = 0;
        }
    }
    return 0;
}