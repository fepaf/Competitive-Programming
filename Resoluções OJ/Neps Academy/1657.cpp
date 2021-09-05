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
#define DEBUG 1
#define W(x) if (DEBUG) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;
#define WS(x) if (DEBUG) cerr << "\033[31m"<< x << "\033[0m" << ' ';
#define SS if (DEBUG)  cerr << endl;

using namespace std;

i64 n, l, p[MAX], half, lo, hi, md;
set<i64> cj;
set<ii> diam;

int main(){_
    cin >> n;
    for (int i=1; i<=n; ++i){
        cin >> l;
        p[i] = p[i-1] + l;
    }
    for (int i=n+1; i<n+n; ++i){
        p[i] = p[n]+p[i-n];
    }
    p[n+n] = (1LL<<60);
    if (p[n]&1LL){
        cout << 'N' << endl;
        return 0;
    }
    half = (p[n]>>1);
    for (int i=0; i<n; ++i){
        lo = i, hi = i+n;
        while (lo < hi){
            md = lo + ((hi-lo)>>1);
            if (p[md]>=p[i]+half) hi = md;
            else lo = md + 1;
        }
        if (p[lo]==p[i]+half){
            diam.insert({i+1,lo});
        }
    }
    for (auto [i, j] : diam){
        auto[l,r] = *diam.upper_bound({i,j});
        if (i <= l && l <= j){
            cout << 'S' << endl;
            return 0;
        }
    }
    cout << 'N' << endl;
    return 0;
}
