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

int n, q, lo, hi, md, a[MAX], x, tc;

int p(int md, int x){
    return x <= a[md];
}

int main(){_
    while ((cin >> n >> q) && (n || q)){
        for (int i=0; i<n; ++i){
            cin >> a[i];
        }
        sort(a,a+n);

        cout << "CASE# " << ++tc << ":" << endl;
        while (q--){
            cin >> x;
            lo = 0, hi = n-1;
            while (lo < hi){
                md = lo + (hi - lo)/2;
                // md = lo + ((hi - lo)>>1);
                if (p(md, x)) hi = md;
                else lo = md+1;
            }
            if (a[lo]==x){ // 
                cout << x << " found at "<< lo+1 << endl;
            } else {
                cout << x << " not found" << endl;
            }
        }
    }
    return 0;
}
