#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<10)
#define MOD 1000000007
#define i64  long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii pair<int, int>
#define fs first
#define pi 2*acosl(0.0)
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

int n, m, a[MAX][MAX], ans, d[]={-1,0,1,0};

void ff(int i, int j){
    if (i<0 || j<0 || i>=n || j>=m) return;

    if (!a[i][j]) return;

    a[i][j] = 0;

    for (int k=4; k--;){
        ff(i+d[k], j+d[3-k]);
    }
}

int main(){_
    cin >> n >> m;
    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; ++i){
        for (int j=0; j<m; ++j){
            if (a[i][j]){
                ++ans;
                ff(i, j);
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
