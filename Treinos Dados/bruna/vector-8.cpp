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

int n, m, u, v, w;
vvii adj;

/*
Problema: Ler listas de adjacência de grafo ponderado;
obs: desconsiderar a flag.
*/

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

    cout << "Listas de adjacência: " << endl;

    for (int u=0; u<=n; ++u){
        cout << u << ": ";
        // for (int j=0; j<sz(adj[i]); ++j){
            // cout << '(' << adj[i][j].fs << ',' << adj[i][j].sc << ')' << ' ';
        // }
        for (auto [v, w] : adj[u]){
            cout << '(' << v << ',' << w << ')' << ' ';
        }
        cout << endl;
    }


    return 0;
}
