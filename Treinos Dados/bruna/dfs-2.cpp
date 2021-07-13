#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define sz(x) (int)(x).size()
#define pb push_back
#define eb emplace_back
#define fs first
#define sc second
#define ii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>

using namespace std;

int n, m, u, v, w, comp;
vvii adj;
vi vis;

/*
soma o peso das arestas de cada componente conexo
*/

int dfs(int u){

  O
    vis[u] = 1;

    //área de lógica do atual

    for (auto [v,w] : adj[u]){
        if (!vis[v]){
            ans += w + dfs(v);
        }
    }

    return ans;
}


int main(){_

    cin >> n >> m;

    adj = vvii(n+1);

    while (m--){
        cin >> u >> v >> w;
        adj[u].pb({v,w}); // aresta u->v
        adj[v].pb({u,w}); // aresta v->u, isso para nao direcionado

        // adj[u].eb(v,w); // aresta u->v
        // adj[v].eb(u,w); // aresta v->u
    }

    vis = vi(n+1, 0);

    comp = 0;
    for (int u=1; u<=n; ++u){
        if (!vis[u]){
            ++comp;
            cout << comp << ' ' << dfs(u) << endl;
        }
    }



    return 0;
}
