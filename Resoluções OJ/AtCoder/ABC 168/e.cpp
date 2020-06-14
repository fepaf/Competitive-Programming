#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<i64, i64>
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

map<ii, i64> dir, liv;
i64 a, b;

i64 mdc(i64 a, i64 b){
    return b ? mdc(b, a%b) : a;    
}

i64 fastpow(i64 b, i64 e){
    i64 ans = 1LL;
    for (; e; b=(b*b)%MOD, e>>=1) if (e & 1LL) ans = (ans * b)%MOD;
    return ans;
}

i64 ans, m, n, z, fator;

int main(){_
    cin >> n;
    for (int i=n; i--;){
        cin >> a >> b;
        if (a<0){
            a = -a;
            b = -b;
        }
        if (!(a || b)){
            ++z;
            continue;
        }
        m = mdc(abs(a), abs(b));
        a /= m; b /= m;
        if (a==0)  b=-1;
        else if (b==0) a=1;
        dir[ii(a,b)]++;
    }
    for (auto p : dir){
        int u = p.fs.fs, v = p.fs.sc;
        if (dir.find(ii(v, -u)) == dir.end() && dir.find(ii(-v, u)) == dir.end()){
            ++ans;
        }
        else {
            liv[ii(u, v)] = dir[ii(u, v)];
        }
    }
    ans = fastpow(2, ans);
    for (auto p : liv){
        int u = p.fs.fs, v = p.fs.sc;

        if (!p.sc) continue;

        fator = (fastpow(2, p.sc)-1 + MOD)%MOD;

        if (v >= 0){
            fator = (fator + fastpow(2, liv[ii(v, -u)]) + MOD) % MOD;
            liv[ii(v, -u)] = 0;
        }
        else{
            fator = (fator + fastpow(2, liv[ii(-v, u)]) + MOD) %MOD;
            liv[ii(-v, u)] = 0;
        }
        
        ans = (ans * fator) % MOD;
    }
    cout << (ans -1 + z + MOD)%MOD << endl;
    return 0;
}