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

int dp[MAX], c[18][18], n;

int f(int vis){
    if ((1<<n)-1 == vis) return 0;

    if (~dp[vis]) return dp[vis];

    int u = __builtin_popcount(vis);

    int ans = INT_MAX;
    for (int v=0; v<n; ++v){
        if (!((1<<v) & vis)){
            ans = min(ans, f((1<<v)|vis) + c[u][v]);
        }
    }
    return dp[vis] =  ans;
}

int main(){_
    while ((cin>>n)&&n){
        for (int i=0; i<n; ++i)   {
            for (int j=0; j<n; ++j){
                cin >> c[i][j];
            }
        }
        for (int i=(1<<n); i--;){
            dp[i] = -1;
        }
        cout << f(0) << endl;
    }
    return 0;
}
