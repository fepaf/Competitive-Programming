// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Harbin é Muita Grana!
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2103

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 102
#define EPS (1e-7)
#define MOD 1300031
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

struct aresta{
    int u,v,w;
};

int t,n,u,v,w;
vvi adj;
vi vis, bellow;
vector<aresta> a;
ll ans;

int dfs(int u){
    vis[u] = VISITED;
    for (auto v : adj[u]){
        if (vis[v]==UNVISITED){
            bellow[u]+=dfs(v);
        }
    }
    return bellow[u];
}

int main(){_
    for (cin>>t; t--;){
        cin>>n;
        adj = vvi(n+1); vis = vi(n+1, UNVISITED); bellow = vi(n+1,1);
        for (int i=n-1; i--;){
            cin>>u>>v>>w;
            a.pb(aresta{u,v,w});
            adj[u].pb(v), adj[v].pb(u);
        }
        ans=0;
        dfs(1);
        for (int i=n-1; i--;){
            ll  x=min(bellow[a[i].u], bellow[a[i].v]);
            ans=(ans + (a[i].w*((x*(n-x))%MOD))%MOD)%MOD;
        }
        cout<<ans<<endl;
        a.clear();
    }
    return 0;
}

