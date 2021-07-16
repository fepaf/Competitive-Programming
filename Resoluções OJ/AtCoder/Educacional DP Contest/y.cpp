#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX 200123
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

i64 dp[MAX], fat[MAX], ifat[MAX], h, w, n;
ii p[MAX];

i64 inv(i64 a, i64 b){
    return (a > 1) ? (b-inv(b%a, a)*b/a) : 1LL;
}

i64 ways(i64 r1, i64 c1, i64 r2, i64 c2){
    i64 ans = fat[r2-r1+c2-c1];
    ans = (ans * ifat[r2-r1]) % MOD;
    ans = (ans * ifat[c2-c1]) % MOD;
    return ans;
}

int main(){_
    fat[0] = ifat[0] = 1;
    for (int i=1; i<MAX; ++i){
        fat[i] = (fat[i-1]*i)%MOD;
        ifat[i] = inv(fat[i], MOD);
    }
    cin >> h >> w >> n;
    for (int i=0; i<n; ++i){
        cin >> p[i].fs >> p[i].sc;
    }
    p[n].fs = h; p[n].sc = w;

    sort(p, p+n+1);

    for (int i=0; i<=n; ++i){
        dp[i] = ways(1, 1, p[i].fs, p[i].sc);
        for (int j=0; j<=i-1; ++j){
            if (p[j].sc > p[i].sc) continue;
            dp[i] -= (dp[j]*ways(p[j].fs, p[j].sc, p[i].fs, p[i].sc))%MOD;
            dp[i] = (dp[i]+MOD)%MOD;
        }
    }
    cout << dp[n] << endl;
    return 0;
}
