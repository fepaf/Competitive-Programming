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

long long fat[10000001], t, a, b, ans;

long long inv_mod(int a, int b){
    return (a > 1 ? b-inv_mod(b%a, a)*b/a : 1);
}

// Problema:  N! mod M
// 1<= N <= 106

int main(){_
    fat[0] = 1;
    for (int i=1; i<=1000001; ++i){
        fat[i] = (fat[i-1] * i)%MOD;
    }
    cin >> t;
    while (t--){
        cin >> a >> b;
        ans = (fat[a] * inv_mod(fat[b], MOD))%MOD;
        ans = (ans * inv_mod(fat[a-b],MOD))%MOD;
        cout <<  ans << endl;
    }
    return 0;
}
