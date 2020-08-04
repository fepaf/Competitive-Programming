#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<17)
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

int n, t, a[2][MAX], i, j, p[MAX];

int main(){_
    cin >> n >> t;
    for (int i=0; i<2; ++i){
        for (int j=1; j<=n; ++j){
            cin >> a[i][j];
        }
    }
    while (t--){
        cin >> i >> j;
        p[i] ^= 1;
        p[j+1] ^= 1;
    }
    for (int i=1; i<=n; ++i){
        p[i] ^= p[i-1];
        cout << a[p[i]][i] << ' ';
    }
    cout << endl;

    return 0;
}