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
    return (a > 1LL ? b-inv_mod(b%a, a)*b/a : 1LL); 
}

i64  a, b, n;

i64 is_beauty(i64 x){
    int r;
    while (x){
        r = x%10;
        if (r!=a && r!=b) return 0;
        x/=10;
    }
    return 1;
}

i64 sum, ans, fat[MAX], ifat[MAX];

int main(){_
    cin >> a >> b >> n;
    fat[0] = ifat[0] = 1LL; 
    for (int i=1; i<=n; ++i){
        fat[i] = (fat[i-1]*i)%MOD;
        ifat[i] = inv_mod(fat[i], MOD);
    }
    for (int i=0; i<=n; ++i){
        sum = a*i+b*(n-i);
        if (is_beauty(sum)){
            W(sum)
        }
        ans += is_beauty(sum) ? (((fat[n]*ifat[n-i])%MOD)*ifat[i])%MOD : 0LL;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}
