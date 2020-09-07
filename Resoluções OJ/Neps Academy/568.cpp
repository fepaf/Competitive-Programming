#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

vvi adj;
int n, m, u, v, forb[MAX], q;

int main(){_
    cin >> n >> m;
    adj = vvi(n+1);
    while (m--){
        cin >> u >> v;
        adj[u].eb(v);
        adj[v].eb(u);
    }
    for (int i=n; i>=1; --i){
        if (!forb[i]){
            ++q;
            for (int j : adj[i]){
                forb[j] = 1;
            }
        }
    }
    cout << q << '\n';
    for (int i=1; i<=n; ++i){
        if (!forb[i]) cout << i << ' ';
    }
    cout << '\n';
}
