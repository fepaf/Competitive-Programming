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

using namespace std;

int n, m, k, x, y, a, b, ans, g[MAX][MAX];
queue<ii> f;

int main(){_
    cin >> n >> m >> x >> y >> k;
    g[x][y] = 1;
    f.push({x,y});
    while (k--){
        cin >> a >> b;
        g[a][b] = 2;
    }
    while (!f.empty()){
        ii q = f.front(); f.pop();
        a = q.fs , b = q.sc;

        ++ans;

        for (int i=a-1; i<a+2; ++i){
            for (int j=b-1; j<b+2; ++j){
                if ((i==a && j==b) || i<1 || i>n || j<1 || j>m || g[i][j]) continue;
                g[i][j] = 1;
                f.push({i,j});
            }
        }
    }
    cout << ans << endl;
    return 0;
}
