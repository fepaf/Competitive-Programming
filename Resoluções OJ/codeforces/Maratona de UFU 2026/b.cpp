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

i64 inv_mod(i64 a, i64 b){
    return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);
}

i64 n, m, t, fat[1002], ifat[1002], p, q;
int dp[500][501][501];
string s;

int f(int l, int a, int v){
    if (a<0 || v<0) return 0;
    if (l==t) return ((ifat[a]*ifat[v])%MOD*fat[a+v])%MOD;
    if (~dp[l][a][v]) return dp[l][a][v];
    
    dp[l][a][v] = 0;
    
    if (s[l] == 'A'){
        if (a>0) dp[l][a][v] += f(l+1, a-1, v) + f(l, a-1, v);
        dp[l][a][v] %= MOD;
        if (v>0) dp[l][a][v] += f(l, a, v-1);
    }
    else if (s[l] == 'V'){
        if (v>0) dp[l][a][v] += f(l+1, a, v-1) + f(l, a, v-1);
        dp[l][a][v] %= MOD;
        if (a>0) dp[l][a][v] += f(l, a-1, v);
    }
    dp[l][a][v] %= MOD;
    return dp[l][a][v];
}

int main(){_
    fat[0] = ifat[0] = 1;
    memset(dp, -1, sizeof(dp));

    cin >> s >> n >> m;
    t = sz(s);

    for (int i=1; i<=n+m; ++i){
        fat[i] = (fat[i-1]*i)%MOD;
        ifat[i] = inv_mod(fat[i], MOD);
    }

    p = f(0,n,m);

    q = fat[n+m];
    q = (q*ifat[n])%MOD;
    q = (q*ifat[m])%MOD;

    q = inv_mod(q,MOD);
    cout << (p*q)%MOD << endl;
    return 0;
}
