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

/*
Problem: Number Spiral
Link: https://cses.fi/problemset/task/1071
*/
 
i64 t, y, x, ma, me, ans;

int main(){_
    cin >> t;
    while (t--){
        cin >> y >> x;
        ma = max(x, y);
        me = min(x, y);

        ans = (ma-1)*(ma-1);
        
        if (ma == y){
            ans += ((y&1) ? me : 2*ma-me);
        } else{
            ans += ((x&1) ? 2*ma-me: me);
        }

        cout << ans << endl;
    }
    return 0;
}
