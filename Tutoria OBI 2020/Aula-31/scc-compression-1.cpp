#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MOD 1000000007
#define MAX (1<<20)
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

int n, m, u, v, w;
vvi adj, adjr, dag;
vi ordem;
vi vis;
vi rot;
vii arestas;

void dfs(int u){
    vis[u] = 1;
    for (int v : adj[u]){
        if (!vis[v]){
            dfs(v);
        }
    }
    ordem.eb(u);
}

void dfs2(int u, int comp){
    vis[u] = 1;
    rot[u] = comp;
    cout << u << ' ';
    for (int v : adjr[u]){
        if (!vis[v]){
            dfs2(v, comp);
        }
    }
}

int scc(){// retorna quantidade de SCC's
    int count_scc = 0;

    vis = vi(n+1, 0);

    //1a rodada
    for (int u=1; u<=n; ++u){
        if (!vis[u]){
            dfs(u);
        }
    }


    //2a rodada
    rot = vi(n+1, -1);
    vis = vi(n+1, 0); 
    for (int i=n-1; i>=0; i--){
        if (!vis[ordem[i]]){
            cout << "componente" << endl;
            dfs2(ordem[i], ++count_scc); // Todos visitados aqui formam juntos um componente fortemente conexo
            cout << endl;
        }
    }

    ordem.clear();
    return count_scc;
}

int main(){_
    cin >> n >> m;

    adj = vvi(n+1);
    adjr = vvi(n+1);

    while (m--)   {
        cin >> u >> v;
        adj[u].eb(v);
        adjr[v].eb(u);
        arestas.eb(u,v);
    }

    int qtd_scc = scc();

    dag = vvi(qtd_scc+1);
    for (auto [u, v] : arestas){
        if (rot[u]!=rot[v]){
            dag[u].eb(v);
            cout << rot[u] << ' ' << rot[v] << endl;
        }
    }   

    return 0;
}