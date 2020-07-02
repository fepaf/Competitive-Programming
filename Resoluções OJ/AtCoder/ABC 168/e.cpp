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
#define vi vector<i64>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define lsb(x) ((x) & (-x))
#define gcd(x,y) __gcd((x),(y))

using namespace std;

map<ii, i64> f;
vii dir;
vi pot2;
i64 n, xz, yz, zz, a, b, ans, fator;

int main(){_
    cin >> n;
    
    pot2.eb(1);
    for (int i=n; i--;){
        pot2.eb((2*pot2.back())%MOD);
    }

    dir = vii(n);
    for (auto &[x, y] : dir){
        cin >> x >> y;

        if (!x) {
            if (!y){
                ++zz;
                continue;
            }else{
                ++xz;
            }
        }else if (!y){
            ++yz;
        }
        
        if (x<0){
            x = -x; y = -y;
        }

        i64 mdc = abs(gcd(x, y));
        x /= mdc; y/=mdc;
        
        ++f[{x,y}];
    }
    
    ans = 1LL;
    
    fator = (pot2[xz] + pot2[yz] - 1LL + MOD)%MOD;
    ans = (ans * fator) % MOD;

    for (auto [p, c] : f){
        i64 x = p.fs, y=p.sc;

        if (!x || !y || !c) continue;

        a = (y > 0 ? y : -y);
        b = (y > 0 ? -x : x);

        fator = (pot2[c] + pot2[f[{a,b}]] - 1LL + MOD) % MOD;
        ans = (ans * fator) % MOD;

        f[{a,b}] = 0;
    }


    cout << (ans-1LL+zz+MOD)%MOD << endl;

    return 0;
}