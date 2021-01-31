#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MAX_AI (1<<18)
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int t, n, uns, tam;
int a, lp[MAX], dp[MAX_AI], ans;
vi p;
map<int, int> f;

int main(){_

    for (cin >> t; t--;){
        cin >> n;

        for (int i=0; i<n; ++i){
            cin >> a;
            ++f[a];
        }
        
        ans = 0;
        for (int x=1; x<MAX_AI; ++x){
            dp[x] += f[x];
            for (int y=x+x; y<MAX_AI; y+=x){
                dp[y] = max(dp[y], dp[x]);
            }
            ans = max(ans, dp[x]);
        }


        cout << (n-ans) << endl;

        f.clear();
        memset(dp,0, sizeof(dp));
    }
    return 0;
}
