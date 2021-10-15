#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define UNVISITED 0
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
vii g[MAX];
vi vis;
int comp[MAX], k;

int teste;

struct aresta{
    int u, v, w;
};

aresta arestas[MAX];

vi gc[MAX],low,num,pai;
int timer,bridges;

void dfs_pontes(int u){
    num[u]=low[u]=timer++;
    for (int v : gc[u]){
        if (num[v]==UNVISITED){
            pai[v]=u;

            dfs_pontes(v);

            bridges+=(low[v]>num[u]);

            low[u]=min(low[u],low[v]);

        }else if (v!=pai[u]) low[u]=min(low[u],num[v]);
    }
}

int pontes(int n){
    int ans;
    timer=bridges=0;
    num.assign(n+1,UNVISITED), low.assign(n+1,0), pai.assign(n+1,0);
    dfs_pontes(1);
    num.clear(),low.clear(),pai.clear();
    for (int i=1;i<=n;i++) gc[i].clear();
    return bridges;
}

int dfs2(int u){
    vis[u] = 1;
    comp[u] = k;
    for (auto [v, w] : g[u]){
        if (!vis[v] && abs(w)==2){
            dfs2(v);
        }
    }
}

int dfs(int u, int dir){
    vis[u] = 1;
    int reach = 1;
    for (auto [v, w] : g[u]){
        if (dir && (w==-1)){
            continue;
        }
        if (!vis[v]){
            reach += dfs(v, dir);
        }
    }
    return reach;
}

int fecho(int dir){
    for (int u=1; u<=n; ++u){
        vis = vi(n+1, 0);
        int temp = dfs(u, dir);
        if (temp!=n) return 0;
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

            g[u].eb(v,w);
            g[v].eb(u,-w);
        }
        
        if (fecho(1)){
            cout << '-' << endl;
            continue;
        }

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
                gc[comp[u]].eb(comp[v]);
                gc[comp[v]].eb(comp[u]);
            }
        }

        cout << (pontes(k) ? 2 : 1) << endl;

    }
    return 0;
}
