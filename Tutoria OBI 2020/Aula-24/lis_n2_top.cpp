#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define MAX (1<<20)
#define MAXN (1<<10)
#define MAXC (1<<10)
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

// Dado uma uma mochila de capacidade C (em unidades de peso) e N objetos com valor Vi e Pi, qual
// maior valor valor armazenável na mochila?

int n, a[MAX], memo[MAX], dp[MAXN][MAXC], c;

int f(int idx){
    if (idx == n) return 1;

    if (~memo[idx]) return memo[idx];

    int ans = 1;
    for (int after=idx+1; after<=n; ++after){
        if (a[after]>a[idx] && f(after)+1 > ans){
            ans = f(after)+1; 
        }
    }

    return memo[idx] = ans;
}


int main(){_
    cin >> n;

    for (int i=1; i<=n; ++i)  {
        cin >> a[i];
    }

    for (int i=0; i<=n; ++i){
        memo[i] = -1;
    }

    int ans = 0;
    for (int i=1; i<=n; ++i){
        ans = max(ans, f(i));
    }

    cout << ans << endl;
    return 0;
}