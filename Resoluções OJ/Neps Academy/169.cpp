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

int g[MAX][MAX], n, m, x, y, v, s[MAX], tt, ts;

int main(){_
    cin >> m >> n;
    while (m--){
        cin >> x >> v >> y;
        s[x] -=v;
        s[y] +=v;
        tt += v;
    }
    for (int i=1; i<=n; ++i){
        if (s[i]>0) ts += s[i];
    }
    cout << (ts<tt ? 'S':'N') << endl << ts << endl;
    return 0;
}