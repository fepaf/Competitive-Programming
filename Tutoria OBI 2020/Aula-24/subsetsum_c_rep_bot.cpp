#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define MAX (1<<20)
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

// Com repetição dos elementos

int n, x, a[MAX];

int dp[MAX];

int main(){_
    cin >> x >> n;

    for (int i=1; i<=n; ++i)  {
        cin >> a[i];
    }

    dp[0] = 1;
    for (int i=1; i<=x; ++i){ // crescente, isso é com repetição
        for (int j=1; j<=n; ++j){
            dp[i] |= dp[i-a[j]];
        }
    }

    cout << dp[x] << endl;
    return 0;
}