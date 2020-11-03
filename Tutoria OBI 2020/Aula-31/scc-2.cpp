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
vvi adj, adjr;
vi ordem;
vi vis;

void dfs(int u){
    vis[u] = 1;
    for (int v : adj[u]){
        if (!vis[v]){
            dfs(v);
        }
    }
    ordem.eb(u);
}

void dfs2(int u){
    vis[u] = 1;
    for (int v : adjr[u]){
        if (!vis[v]){
            dfs2(v);
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
    vis = vi(n+1, 0); 
    reverse(all(ordem)); 
    for (int u : ordem){
        if (!vis[u]){
            dfs2(u);
            ++count_scc;
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
    }

    //testa se o grafo fortemente conexo
    if (scc()==1){
        cout << "Fortemente conexo" << endl;
    } else {
        cout << "Não é Fortemente Conexo" << endl;
    }
    cout << scc() << endl;

    return 0;
}