#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF (1LL<<60)
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
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Giant Pizza
Link: https://cses.fi/problemset/task/1684
*/

int n, m, u, v, t, nc, has;
vvi adj, adjr;
vi vis, comp, toporder;
char c1, c2;
string ans;

int vt(char c, int u, int i){
    return (u<<1)+((c=='+')^i);
}

void dfs1(int u){
    vis[u] = 1;
    for (int v : adj[u]){
        if (!vis[v]) dfs1(v);
    }
    toporder.eb(u);
}

void dfs2(int u, int c){
    comp[u] = c;
    for (int v : adjr[u]){
        if (comp[v]==-1) dfs2(v, c);
    }
}

int main(){_
    cin >> m >> n;
    
    t = (n+n);
    adj = vvi(t); adjr = vvi(t);
    
    while (m--){
        cin >> c1 >> u >> c2 >> v;
        u--, v--;

        adj[vt(c1,u,1)].eb(vt(c2,v,0));
        adjr[vt(c2,v,0)].eb(vt(c1,u,1));

        adj[vt(c2,v,1)].eb(vt(c1,u,0));
        adjr[vt(c1,u,0)].eb(vt(c2,v,1));
    }

    vis = vi(t, 0);
    for (int u=0; u<t; ++u){
        if (!vis[u]) dfs1(u);
    }

    comp = vi(t, -1);
    reverse(all(toporder));
    for (int u : toporder){
        if (comp[u]==-1) dfs2(u, nc++);
    }

    ans = "";
    has = 1;
    for (int u=0; u<n; ++u){
        has &= (comp[vt('+',u,0)] != comp[vt('-',u,0)]);
        ans += (comp[vt('+',u,0)] > comp[vt('-',u,0)] ? '+' : '-');
    }
    
    cout << (has ? ans : "IMPOSSIBLE") << endl;
    return 0;     
}
