#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<10)
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

int n;
struct caixa{
    int p, r;
};

int cmp(caixa a, caixa b){
    return a.r + a.p >= b.r + b.p;
}

caixa cx[MAX];
int dp[MAX][MAX];

int main(){_
    cin >> n;
    for (int i=1; i<=n; ++i){
        cin >> cx[i].p >> cx[i].r;
        cx[i].r -= cx[i].p;
    }
    sort(cx+1, cx+n+1, cmp);
    for (int i=0;i<=n;++i){
        dp[i][0] = INT_MAX;
    }
    for (int i=1;i<=n;++i){
        for (int j=i+1;j<=n;++j){
            dp[i][j] = -1;
        }
    }
    for (int i=1;i<=n;++i){
        for (int j=1;j<=i;++j){
            if (dp[i-1][j-1] >= cx[i].p){
                dp[i][j] = max(dp[i-1][j], min(dp[i-1][j-1]-cx[i].p, cx[i].r));
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    int ans = 0;
    for (int i=n; i>=0; --i){
        if (~dp[n][i]){
            cout << i << endl;
            return 0;
        }
    }
}
