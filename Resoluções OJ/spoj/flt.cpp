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

i64 fexpo(i64 b, i64 e){
    i64 ans = 1;
    while (e){
        if (e&1) ans = (ans*b)%MOD;
        b = (b*b)%MOD;
        e >>= 1;
    }
    return ans;
}

i64 n, nth, p;

int main(){_
    while (cin >> n >> nth >> p){
        cout << (nth*inv_mod(fexpo(p, n-1), MOD))%MOD << endl;
    }
    return 0;
}
