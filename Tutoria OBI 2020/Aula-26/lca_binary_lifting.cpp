#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define MAX (1<<20)
#define MAXN (1<<10)
#define MAXC (1<<10)
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

vvii adj;
int n;
int u, v, w;

int timer;
int l;
vi tin, tout;
vvi up;

void dfs(int u, int p){// tempo n logn , logn = l
    tin[u] = ++timer;

    up[u][0] = p;
    for (int i=1; i<=l; ++i){
        up[u][i] = up [ up[u][i-1] ][i-1];
    }

    for (auto [v, w] : adj[u]){
        if (v != p){
            dfs(v, u);
        }
    }

    tout[u] = ++timer;
}


int is_anc(int u, int v){
    return tin[u]<=tin[v] && tout[v]<=tout[u];
}

int lca(int u, int v){
    if (is_anc(u, v)) return u;
    
    if (is_anc(v, u)) return v;

    int atual = v;
    for (int i=l; i>=0; --i){
        if (!is_anc(up[atual][i], u)){
            atual = up[atual][i];
        }
    }

    return up[atual][0];
}

int preproc(int s){

    l = log2(n+1)+1;
    timer = 0;
    tin = vi(n+1);
    tout = vi(n+1);

    up = vvi(n+1, vi(l));

    dfs(s, -1);
}

int main(){_
    cin >> n;
    adj = vvii(n+1);



    for (int i=n-1; i--;){
        cin >> u >> v >> w;
        adj[u].eb(v, w);
        adj[v].eb(u, w);
    }


    return 0;
}