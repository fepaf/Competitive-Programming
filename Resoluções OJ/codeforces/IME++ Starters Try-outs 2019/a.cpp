#include <bits/stdc++.h>
#define MAXN 2123
#define INF 0x3f3f3f3f
#define ii pair<int,int>
#define fs first
#define sc second

using namespace std;

int vis[MAXN], parent[MAXN], dist[MAXN];
set<int> adj[MAXN];
int n,m,u,v;

int bfs(int s){
    queue<int > fila;

    fila.push(s);
    dist[s] = 0;
    while (!fila.empty()){
        int u= fila.front(); fila.pop();

        for (auto v : adj[u]){
            if (dist[v]==-1){
                dist[v] = dist[u]+1;
                fila.push(v);
            }
        }
    }

    int ans = 1;
    for (int i=1; i<=n; i++){
        if (dist[i] > dist[ans]){
            ans = i;
        }
    }

    return ans;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> u >> v;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    memset(dist,-1,sizeof(dist));
    int x = bfs(1);
    for(int i = 1; i <= n; i++){
        if(dist[i]==-1){
            cout << "=[" << endl;
            exit(0);
        }
    }
    int ans  = 0;
    for(int i = 1; i <= n; i++){
        memset(dist,-1,sizeof(dist));
        x = bfs(i); 
        ans = max(ans, dist[x]);
    }
    
    cout << "=] " << ans << endl;
    return 0;
}