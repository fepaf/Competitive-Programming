#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define OUT MAX
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
#define esq(x) (x<<1)
#define dir(x) ((x<<1)|1)
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

int n, m, u, v, w, grau[MAX], ans;
vii gb[MAX],gu[MAX];
vi vis;
int comp[MAX], k;

struct aresta{
    int u, v, w;
};

aresta arestas[MAX];

void dfs2(int u){
    vis[u] = 1;
    comp[u] = k;
    for (auto [v, w] : gb[u]){
        if (!vis[v] && abs(w)==2){
            dfs2(v);
        }
    }
}

int dfsb(int u){
    vis[u] = 1;
    int reach = 1;
    for (auto [v, w] : gb[u]){
        if (!vis[v]){
            reach += dfsb(v);
        }
    }
    return reach;
}

int dfsu(int u){
    vis[u] = 1;
    int reach = 1;
    for (auto [v, w] : gu[u]){
        if (!vis[v]){
            reach += dfsu(v);
        }
    }
    return reach;
}


int fecho(int dir){
    vis = vi(n+1, 0);
    for (int u=1; u<=n; ++u){
        if (vis[u]) continue;
        int temp = (dir ? dfsu(u) : dfsb(u));
        // if (!dir)W(temp)
        if (temp!=n) return 0;
        // if (!vis[u] && dfs(u, dir)!=n) return 0;
    }
    return 1;
}

int main(){_
    while (cin >> n >> m){
        for (int i=1; i<=1024; ++i){
            g[i].clear();
            grau[i] = 0;
            comp[i] = 0;
        }
        vis.clear();
        k = 0;

        for (int i=m; i--;){
            cin >> u >> v >> w;

            if (i==m-1) continue;

            arestas[i] = {u,v,w};

            gb[u].eb(v,w);
            gb[v].eb(u,w);

            gu[u].eb(v,w);
            if (w==2) gu[v].eb(u,w);
        }
        
        if (fecho(1)){
            cout << '-' << endl;
            continue;
        }
        // cout << "--------------------------" << endl;
        if (!fecho(0)){
            cout << '*' << endl;
            continue;
        }

        vis = vi(n+1, 0);
        for (int u=1; u<=n; ++u){
            if (!vis[u]){
                ++k;
                dfs2(u);
            }
        }

        for (int i=m; i--;){
            u = arestas[i].u, v = arestas[i].v;
            if (comp[u] != comp[v]){
                // gc[comp[u]].eb(comp[v]);
                // gc[comp[v]].eb(comp[u]);
                ++grau[comp[u]];
                ++grau[comp[v]];
            }
        }

        ans = 1;
        for (int u=1; u<=n; ++u){
            // W(u)
            // W(grau[u])
            if (grau[u]==1){
                ans = 2;
                break;
            }
        }

        cout << ans << endl;

    }
    return 0;
}
