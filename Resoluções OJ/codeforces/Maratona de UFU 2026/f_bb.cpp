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

int n, f[MAX], p, ans, soma, q, lo, hi, md;
vi tam;

int main(){_
    cin >> n;
    f[0] = 1;
    for (int i=2; i<=n; ++i){
        cin >> p;
        ++f[p];
    }
    for (int i=0; i<=n; ++i){
        if (f[i]){
            tam.eb(f[i]);
        }
    }
    sort(tam.rbegin(), tam.rend());
    q = sz(tam);

    lo = q, hi = n;
    while (lo < hi){
        md = lo + ((hi-lo)>>1);

        soma = 0;
        for (int i=0; i<q; i++){
            int dfct = (tam[i]-(md-i));
            soma += max(0, dfct);
        }

        if (q+soma <= md) hi = md;
        else lo = md + 1;
    }
    ans = lo;
    cout << ans << endl;
    return 0;
}
