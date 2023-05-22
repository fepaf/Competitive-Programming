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

i64 t, n, c, d, a[MAX], lo, hi, sum, s, k;

int main(){_
    for (cin >> t; t--;){
        cin >> n >> c >> d;
        sum = 0;
        for (int i=0; i<n; ++i){
            cin >> a[i];
            if (i<d) sum += a[i];
        }
        if (d <=n && sum < c){
            cout << "Impossible" << endl;
            continue;
        }
        sort(a, a+n, greater<i64>());
        lo = 0, hi = n;
        while (lo < hi){
            k = lo + ((hi-lo)>>1);

            s = 0;
            for (int i=0; i<d; ++i){
                cout << a[i%k] << ' ';
                s += a[i%k];
            }

            if () hi = k;
            else lo = k + 1
        }
        cout << lo << endl;
    }
    return 0;
}
