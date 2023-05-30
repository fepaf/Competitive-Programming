#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define OUT MAX
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
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, u, v, w, t, a, b, ans;
vvii adj;
set<int> cj;

void dfs1(int u, int p, int x){
    if (u == b) return;
    cj.insert(x);

    for (auto [v, w] : adj[u]){
        if (v == p) continue;
        dfs1(v, u, x ^ w);
    }
}


int dfs2(int u, int p, int x){
    if (u != b && cj.count(x)) return 1;

    for (auto [v, w] : adj[u]){
        if (v == p) continue;
        if (dfs2(v, u, x ^ w)) return 1;
    }

    return 0;
}

int dfs(int u, int p, int x, int idx){
    if (!idx){
        if (u == b) return 0;
        cj.insert(x);
    } else{
        if (u != b && cj.count(x)) return 1;
    }

    for (auto [v, w] : adj[u]){
        if (v == p) continue;
        if (dfs(v, u, x ^ w, idx)) return 1;
    }

    return 0;
}




int main(){_
    cin >> t;
    for (int ti=0 ; ti<t; ++ti){

        cin >> n >> a >> b; 
        
        adj = vvii(n+1);

        for (int i=n; --i;){
            cin >> u >> v >> w;
            adj[u].eb(v,w);
            adj[v].eb(u,w);
        }

        // dfs1(a, 0, 0);
        // ans = dfs2(b, 0, 0);

        dfs(a,0,0,0);
        ans = dfs(b,0,0,1);

        cout << (ans ? "YES" : "NO") << endl;

        adj.clear();
        cj.clear();
    }
    return 0;
}