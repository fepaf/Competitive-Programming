#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 15
#define INF 0x3f3f3f3f
#define vi vector<int>
#define eb emplace_back

using namespace std;

//obs: usar 0-indexado

int n, m; 
int adj[MAXN][MAXN];
int u, v, w;
vi vis;

int todos(vi a){
    int ans = 0;
    for (int  i=0; i<n; i++){
        ans += a[i];
    }
    return ans==n;
}

int tsp(int u, vi vis){
    if (todos(vis)){
        return adj[u][0];
    }

    int ans = INF;
    for (int v=0; v<n; ++v){
        if (!vis[v]){
            vis[v] = 1;
            ans = min(ans, adj[u][v] + tsp(v, vis));
            vis[v] = 0;
        }
    }

    return ans;
}

int main(){_
    cin >> n >> m;

    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            adj[i][j] = (i!=j ? INF : 0);
        }
    }

    while (m--){
        cin >> u >> v >> w;
        adj[u][v] = w;
        adj[v][u] = w;
    }

    vis = vi(n, 0);
    
    vis[0] = 1;
    cout << tsp(0, vis) << endl;
}