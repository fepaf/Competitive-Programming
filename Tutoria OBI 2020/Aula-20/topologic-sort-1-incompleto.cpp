#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
// #define endl '\n'
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

int n, m;
int u, v;
vvi adj;
vi vis, ord;

void dfs(int u){
    vis[u] = 1;
    for (int v : adj[u]){
        if (!vis[v]){
            dfs(v);
        }
    }
    ord.eb(u);
}

int main(){_
    cin >> n >> m;
    adj = vvi(n+1);
    vis = vi(n+1, 0);
    while (m--){
        cin >> u >> v;
        adj[u].eb(v);
    }
    dfs(5);
    reverse(all(ord));
    // reverse(ord.begin(), ord.end());

    for (int u : ord){
        cout << u << ' ';
    }
    cout << endl;
    return 0;
}
