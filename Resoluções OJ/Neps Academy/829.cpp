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

int n, k, u, c[MAX][MAX], p[MAX*10], ma, me, x;
vvi t;

int main(){_
    cin >> n >> k >> u;
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=k; ++j){
            cin >> c[i][j];
        }
    }
    for (int i=1; i<=u; ++i){
        cin >> x;
        p[x] = i;
    }
    t = vvi(u+1);
    me = u+1;
    for (int i=1; i<=n; ++i){
        ma = 0;
        for (int j=1; j<=k; ++j){
            cin >> c[i][j];
            ma = max(ma, p[c[i][j]]);
        }
        t[ma].eb(i);
        me = min(me, ma);
    }
    for (int id : t[me]){
        cout << id << ' ';
    }
    cout << '\n';
    return 0;
}