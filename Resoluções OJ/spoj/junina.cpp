#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int t, n, u, unf[1<<5], ans, proib;

int main(){_
    while (cin >> n && n){
        for (int i=0; i<n; ++i){
            unf[i] = 0;
            while (cin >> u && u){
                unf[i] |= (1<<(u-1));
            }
        }
        ans = 0;
        for (int i=0; i<(1<<n); ++i){
            proib = 0;
            for (int j=0; j<n; ++j){
                if (i & (1<<j)) proib |= unf[j];
            }
            if (!(i & proib)){
                ans = max(ans, __builtin_popcount(i));
            }
        }
        cout << "Teste " << ++t << endl << ans << endl << endl;
    }
    return 0;
}
