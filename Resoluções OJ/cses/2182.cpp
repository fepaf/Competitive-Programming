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

/*
Problem: Divisor Analysis
Link: https://cses.fi/problemset/task/2182
*/
 
i64 n, e, x, k, p, prod, sum, qtd, odd, nqtd;

i64 fexpo (i64 b, i64 e, i64 m){
    i64 ans=1LL;
    while (e){
        if (e & 1LL) ans = (ans*b)%m;
        b = (b*b)%m;
        e >>= 1;
    }
    return ans;
}

i64 inv_mod(i64 a, i64 b){
    return a>1 ? b - inv_mod(b%a, a)*b/a : 1LL;
}

int main(){_
    cin >> n;
    nqtd = qtd = prod = sum = x = odd = 1;
    for (int i=n; i--;){
        cin >> p >> e;
        x = (x*fexpo(p, e, MOD))%(MOD);
        qtd = (qtd*(e+1))%MOD;
        sum = (sum*(((fexpo(p, e+1, MOD)+MOD-1)*inv_mod(p-1, MOD))%MOD))%MOD;
        if(odd && (e&1)){
            e>>=1;
            odd=0;
        }
        W(e+1)
        nqtd = (nqtd*(e+1))%(MOD-1);
    }
    prod = fexpo(x, nqtd, MOD);
    cout << qtd << ' ' << sum << ' ' << prod << endl;
    return 0;
}
