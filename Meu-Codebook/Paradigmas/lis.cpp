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

int a[MAX], n, ans;
vi d;

int main(){_
    cin >> n;
    d = vi(n+1, INF);
    d[0] = -INF;
    for (int i=0; i<n; ++i){
        cin >> a[i];
        int j = upper_bound(all(d), a[i]) - d.begin();
        if (d[j-1]<a[i] && a[i]<d[j]){
            d[j] = a[i];
        }
    }

    int ans = 0;
    for (int i=0; i<=n; ++i){
        if (d[i]<INF){
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}
