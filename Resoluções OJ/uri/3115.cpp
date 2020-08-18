#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
#define i64 unsigned long long
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

int n, m, u, v, c, lim[MAX];
vvii adj;

void dfs(int u, int p, int me){
    lim[u] = me;
    for (auto [v, w] : adj[u]){
        if (v != p){
            dfs(v, u, min(w, me));
        }
    }
}

int main(){_
    cin >> n;
    adj = vvii(n+1);
    for (int i=n; --i;){
        cin >> u >> v >> c;
        adj[u].eb(v, c);
        adj[v].eb(u, c);
    }
    dfs(n, -1, INF);
    for (int i=1; i<n; ++i){
        cout << lim[i] << (i!=n-1 ? ' ' : '\n');
    }
}
