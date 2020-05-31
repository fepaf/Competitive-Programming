#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
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
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))

using namespace std;

int n, a[MAX], b, e, l , r;
vi s;

int main(){_
    cin >> n >> b >> e;
    for (int i=0; i<n; ++i){
        cin >> a[i];
        for (int j=i-1; j>=0; --j){
            s.eb(a[i]+a[j]);
        }
    }
    s.eb(INT_MAX);
    sort(all(s));
    for (int i=0; i<sz(s); ++i){
        l += (s[i]<b);
        r += (s[i]<=e);
    }
    cout << (r-l) << endl;
    return 0;
}
