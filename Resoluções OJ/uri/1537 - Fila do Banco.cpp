#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<17)
#define MOD 1000000009
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

using namespace std;

i64 ans, n, fat[MAX];

int main(){_
    fat[0] = 1;
    for (int i=1; i<MAX; ++i){
        fat[i] = (fat[i-1]*i)%MOD;
    }
    while((cin >> n) && n){
        ans = 0;
        for (i64 i=1; i<=n-2; ++i){
            ans += i*(n-1-i);
        }
        ans %= MOD;
        ans *= fat[max(n-3,0LL)];
        cout << (ans % MOD) << '\n';
    }
    return 0;
}
