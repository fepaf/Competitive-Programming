#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define sc second
#define eb emplace_back
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

i64 n, t, m, s, x, lo, hi, mid, tam;
i64 a[MAX];
set<i64> cj;
vi h;

int main(){_
    cin >> n >> t;
    for (int i=0; i<n; ++i){
        cin >> a[i];
    }
    m = (n>>1);
    for (int mask=0; mask<(1<<m); ++mask){
        s = 0;
        for (int i=0; i<m; ++i){
            if ((1LL<<i)&mask){
                s += a[i];
            }
        }
        if (s>t) continue;
        cj.insert(s);
    }
    for (i64 e : cj){
        h.eb(e);
    }
    tam = sz(h);
    
    i64 ans = 0;
    for (int mask=0; mask<(1<<(n-m)); ++mask){
        s = 0;
        for (int i=0; i<n-m; ++i){
            if ((1LL<<i)&mask){
                s += a[i+m];
            }
        }
        if (s>t) continue;

        lo = 0, hi=tam, x=t-s;
        while (lo<hi){
            mid = lo+((hi-lo)>>1);
            if (h[mid] > x) hi = mid;
            else lo = mid+1;
        }
        ans = max(ans, s+h[lo-1]);
        
    }
    cout << ans << endl;
    return 0;
}
