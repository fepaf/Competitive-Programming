#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>
#define sz(x) (int)(x).size()


using namespace std;

int n, m, u, v, w, comp;
vvi adj;
vi vis; //vis[u] é 1 se ele foi visitado, 0 se não foi
vi cor; // cor[u] diz a qual componente U pertence

void dfs(int u){
    vis[u] = 1;
    cor[u] = comp;

    //área de lógica do atual
    cout << comp << " : " << u << endl;

    for (int v : adj[u]){
        if (!vis[v]){
            dfs(v);
        }
    }
}

int main(){_
    cin >> n >> m;
    
    adj = vvi(n+1);

    while (m--){
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    vis = vi(n+1, 0);
    vis = vi(n+1, -1);


    comp = 0;
    for (int u=1; u<=n; ++u){
        if (!vis[u]){
            ++comp;
            dfs(u);
        }
    }

    cout << comp << endl;
    return 0;
}