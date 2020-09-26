#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAXN (1<<10) // 2**20 
#define MAXM (1<<10)
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
#define UNCALCULED -1000000008

using namespace std;

int memo[MAXN];
int n, m, a[MAXM];
// Dado uma barra de tamanhon N, quantas formas de cortar em tamanhos A[1..M],
// sem sobras!

int f(int n){
    if (n < 0) return 0;

    if (n == 0) return 1;
    
    if (memo[n] != UNCALCULED) return memo[n];
    
    int ans = 0;
    for (int i=1; i<=m; ++i){
        ans = (ans+f(n-a[i]))%MOD;
    }

    return memo[n] = ans;
}
/* se m*MOD couber num long long

i64 f(i64 n){
    if (n < 0) return 0;

    if (n == 0) return 1;
    
    if (memo[n] != UNCALCULED) return memo[n];
    
    i64 ans = 0;
    for (i64 i=1; i<=m; ++i){
        ans += f(n-a[i]);
    }
    ans %= MOD;

    return memo[n] = ans;
}
*/

int main(){_


    cin >> n >> m;

    for (int i=1; i<=m; ++i){
        cin >> a[i];
    }
    
    for (int i=0; i<=n; ++i){
        memo[i] = UNCALCULED;
    }

    cout << f(n) << endl;
    return 0;
}
