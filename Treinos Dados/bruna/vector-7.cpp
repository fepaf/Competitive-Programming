#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define sz(x) (int)(x).size()
#define pb push_back
#define vi vector<int>
#define vvi vector<vi>

using namespace std;

int n, m, u, v, w;
vvi adj;

/*
Problema: Ler listas de adjacência de grafo não ponderado;
obs: desconsiderar a flag.
*/

int main(){_

    cin >> n >> m;

    adj = vvi(n+1);

    while (m--){
        cin >> u >> v;
        adj[u].pb(v); // aresta u->v
        adj[v].pb(u); // aresta v->u, isso para nao direcionado
    }

    cout << "Listas de adjacência: " << endl;

    for (int u=0; u<=n; ++u){
        cout << u << ": ";
        // for (int j=0; j<sz(adj[i]); ++j){
        //     cout << adj[i][j] << ' ';
        // }
        for (auto v : adj[u]){
            cout << v << ' ';
        }
        cout << endl;
    }


    return 0;
}
