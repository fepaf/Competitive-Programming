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

i64 a[MAX], b[MAX], pa[MAX], pb[MAX], n, m, k, qa, qb, ma, l;

int main(){_
    cin >> n >> m >> k;
    for (int i=1; i<=n; ++i){
        cin >> a[i];
        pa[i] = pa[i-1]+a[i];
    }
    for (int i=1; i<=m; ++i){
        cin >> b[i];
        pb[i] = pb[i-1]+b[i];
    }

    
    l = min(n, k);
    for (int i=0;i<=l; ++i){
        if (pa[i]+pb[k-i] > ma && k-i<=m){
            ma = pa[i]+pb[k-i];
            qa = i;
            qb = k-i;
        }
    }

    l = min(m, k);
    for (int i=0;i<=l; ++i){
        if (pb[i]+pa[k-i] > ma && k-i<=n){
            ma = pb[i]+pa[k-i];
            qb = i;
            qa = k-i;
        }
    }

    cout << qa << ' ' << qb << endl;
    return 0;
}
