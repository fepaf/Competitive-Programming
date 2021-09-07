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

int a, b, c, d, ans;
vi v;

int main(){_
    cin >> a >> b >> c >> d;
    v = {a,b,c,d};
    ans = INT_MAX;
    for (int i=0; i<4; ++i){
        for (int j=0; j<4; ++j){
            if (i==j) continue;
            for (int k=0; k<4; ++k){
                if (k==j || k==i) continue;
                for (int l=0; l<4; ++l){
                    if (l==k || l==j || l==i) continue;
                    ans = min(ans, abs(v[i]+v[j]-v[k]-v[l]));
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
