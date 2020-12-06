#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<20)
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define eb emplace_back
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, m, u, v, ans, cod[MAX], tam[MAX], ge[MAX];
vvi adj[2], dag;
vi st, vis;
vii arestas;
int pai[MAX];
queue<int> fila;

void dfs(int u, int pass, int comp){
    vis[u] = 1;

    for (int v : adj[pass][u]){
        if (!vis[v]){
            dfs(v, pass, comp);
        }
    }

    if (pass){
        cod[u] = comp;
        ++tam[comp];
    } else{
        st.eb(u);
    }
}

int kosaraju(){
    int count_scc = 0;

    vis = vi(n+1, 0);
    for (int u=1; u<=n; ++u){
        if (!vis[u]){
            dfs(u, 0, -1);
        }
    }

    reverse(st.begin(), st.end());
    vis = vi(n+1, 0);
    for (int u : st){
        if (!vis[u]){
            dfs(u, 1, ++count_scc);
        }
    }

    return count_scc;
}

int main(){_
    cin >> n >> m;

    adj[0] = vvi(n+1);
    adj[1] = vvi(n+1);

    for (int i=m; i--;){
        cin >> u >> v;
        arestas.eb(u, v);
        adj[0][u].eb(v);
        adj[1][v].eb(u);
    }

    int scc = kosaraju();
    dag = vvi(scc+1);

    for (auto [u, v] : arestas){
        if (cod[u] != cod[v]){
            ++ge[cod[v]];
            dag[cod[u]].eb(cod[v]);
        }
    }

    for (int i=1; i<=scc; ++i){
        if (!ge[i] && tam[i]<=3){
            fila.push(i);
        }
    }

    while (!fila.empty()){
        int u = fila.front(); fila.pop();
        
        ans += tam[u];

        for (int v : dag[u]){
            if (!(--ge[v]) && tam[v]<=3){
                fila.push(v);
            }
        }
    }

    cout << ans << endl;

    return 0;
}