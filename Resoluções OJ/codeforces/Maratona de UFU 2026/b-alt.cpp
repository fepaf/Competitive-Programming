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

i64 n, m, t, a, v, fat[1002], ifat[1002], p, q, iq, ans;
string s;

i64 inv_mod(i64 a, i64 b){
    return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);
}

i64 comb(i64 n, i64 k){
    if (n < k || k < 0) return 0; // cuidado
    return (((fat[n]*ifat[k])%MOD)*ifat[n-k])%MOD;
}

int main(){_
    cin >> s >> n >> m;
    t = sz(s);

    for (char c : s){
        a += (c=='A');
        v += (c=='V');
    }

    fat[0] = ifat[0] = 1;
    for (int i=1; i<=max(t,n+m); ++i){
        fat[i] = (fat[i-1]*i)%MOD;  
        ifat[i] = inv_mod(fat[i], MOD);
    }

    ans = (comb(n,a)*comb(m,v))%MOD;
    ans = (ans*inv_mod(comb(t, a), MOD))%MOD;
    cout << ans << endl;
    /*
    ans = comb(n,a)*comb(m,v)/comb(t, a)
    ou ans = comb(n,a)*comb(m,v)/comb(t, v)
    por simetria comb(t,a) == comb(t,v)
    */ 
    return 0;
}
 