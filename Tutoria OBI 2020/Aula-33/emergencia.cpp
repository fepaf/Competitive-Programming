#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define sz(x) ((int)(x).size())
#define eb emplace_back
#define UNVISITED 0
#define VISITED 1

using namespace std;

int n, m, u, v, s;
vvi adj[2];
vi vis, rot, ord, graue;
vii arestas;

void dfs(int u, int pass, int comp){
    vis[u] = VISITED;
    
    if (pass==1) rot[u] = comp;

    for (int v : adj[pass][u]){
        if (vis[v]==UNVISITED){
            dfs(v, pass, comp);
        }
    }
    
    if (pass==0) ord.eb(u);
}

int kosaraju(){
    int scc = 0;

    vis = vi(n+1, UNVISITED);
    ord = vi();

    for (int u=1; u<=n; ++u){
        if (vis[u]==UNVISITED){
            dfs(u, 0, -1);
        }
    }

    vis = vi(n+1, UNVISITED);
    rot = vi(n+1, 0);

    for (int i=n-1; i>=0; --i){

        if (vis[ord[i]]==UNVISITED){
            dfs(ord[i], 1, ++scc);
        }
    }

    return scc;
}

int ans;

int main(){_
    cin >> n >> m >> s;

    adj[0] = vvi(n+1);
    adj[1] = vvi(n+1);

    while (m--){
        cin >> u >> v;
        adj[0][u].eb(v);
        adj[1][v].eb(u);
        arestas.eb(u,v);
    }
    
    int scc = kosaraju();

    graue = vi(scc+1);

    for (auto [u, v] : arestas){
        if (rot[u] != rot[v]){
            graue[rot[v]]++;
        }
    }

    ans = 0;
    for (int u=1; u<=scc; ++u){
        ans += (u!=rot[s] && !graue[u]);
    }

    cout << ans << endl;
    return 0;
}