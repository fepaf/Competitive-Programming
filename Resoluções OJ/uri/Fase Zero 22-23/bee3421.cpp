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

i64 k, l, r, x, ans, p10, lo, hi, md, newl, newr;
string d, s;

int cd(i64 n){
    return n ? cd(n/10)+1 : 0;
}

i64 f(i64 n){
    i64 p10=1, d = cd(n);
    for (int i=d; i--;) p10*=10;
    return d*(n+1)-(p10-1)/9;
}

int main(){_

    cin >> k >> l >> r;

    lo = 0, hi = l;
    while (lo < hi){
        md = lo + ((hi-lo)>>1);
        if (f(md) > l) hi = md;
        else lo = md+1;
    }
    newl = lo-1;

    lo = 0, hi = r;
    while (lo < hi){
        md = lo + ((hi-lo)>>1);
        if (f(md) > r) hi = md;
        else lo = md+1;
    }
    newr = lo;


    d = "";
    for (int i=newl;i<=newr; ++i){
        d += to_string(i);
    }
    p10 = 1;
    int offset = l-f(newl);
    for (int i=offset; i<k+offset; ++i){
        x = 10*x+(d[i]-'0');
        p10*=10;
    }
    p10 /= 10;
    ans = x;
    int n = sz(d), sub = f(newr)-r;
    for (int i=k; i<n - sub; ++i){
        x = (x%p10)*10 + d[i]-'0';
        if (x > ans) ans = x;
    }
    // cout<<d.substr(offset,n-sub-offset) << endl;
    cout << ans << endl;
    return 0;
}
