#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<7)
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

int vis[MAX][MAX], n, m, ans;
char a[MAX][MAX];
map<int, int> l, c, dp, ds;

int main(){_
    cin >> n >> m;
    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            if (a[i][j] == '*'){
                l[i] = c[j] = dp[i-j] = ds[i+j] = 1;
            }
        }
    }
    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            ans += (a[i][j]=='P' && (l[i] || c[j] || dp[i-j] || ds[i+j]));
        }
    }
    cout << ans << endl;
    return 0;
}
