#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<14)
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

using namespace std;

i64 n, f[MAX];

int main(){_
    f[0] = 1;
    f[1] = 1;
    f[2] = 5;
    cin >> n;
    for (int i=3; i<=n; ++i){
        f[i] = (f[i-1] + (f[i-2]<<2) + (f[i-3]<<1)) % MOD;
    }
    cout << f[n] << endl;
    return 0;
}