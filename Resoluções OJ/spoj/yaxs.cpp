#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (11)
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

int f[6], best[6],n,x, t, caso, ans;

int main(){_
    for (cin >> t; t--;){
        cin >> n;
        for (int i=n; i--;){
            cin >> x;
            f[x]++;
        }
        best[1] = f[1]+min(f[2],f[3])+min(f[4],f[5]);
        best[2] = f[2]+min(f[3], f[1] + min(f[4],f[5]));
        best[3] = f[3]+min(f[2], f[1] + min(f[4],f[5]));
        best[4] = f[4]+min(f[5], f[1] + min(f[2],f[3]));
        best[5] = f[5]+min(f[4], f[1] + min(f[2],f[3]));
        ans = 0;
        for (int i=1; i<=5; ++i){
            ans = max(ans, best[i]);
            best[i] = f[i] = 0;
        }
        cout << "Case " << (++caso) << ": " << ans << endl;
    }
    return 0;
}
