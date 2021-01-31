#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<10)
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

i64 t, k, n, m;
i64 a[MAX];
i64 comb[MAX][MAX];
i64 f;

int main(){_
    for (int i=0; i<=1000; ++i){
        comb[i][0] = 1;
        for (int j=1; j<=i; ++j){
            comb[i][j] = (comb[i-1][j-1] + comb[i-1][j])%MOD;
        }
    }

    for (cin >> t; t--;){
        cin >> n >> k;
        for (int i=0; i<n; ++i){
            cin >> a[i];
        }
        sort(a, a+n, greater<i64>());
        
        m = f = 0;
        for (int i=n; i--;){
            if (a[i]==a[k-1]){
                ++f;
                m += (i<k);
            }
        }

        cout << comb[f][m] << endl;
    }
    return 0;
}
