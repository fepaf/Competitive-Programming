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
int memo[MAXN][1<<MAXN];

int tsp(int u, int vis){

    if (((1<<n)-1) == vis){
        return adj[u][0];
    }

    if (~memo[u][vis]) return memo[u][vis];

    int ans = INF;
    for (int v=0; v<n; ++v){
        if (!((1<<v) & vis)){
            ans = min(ans, adj[u][v] + tsp(v, vis | (1<<v)));
        }
    }

    return memo[u][vis] = ans;
}

int main(){_
    cin >> n >> m;

    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            adj[i][j] = (i!=j ? INF : 0);
        }
    }

    memset(memo, -1, sizeof(memo));

    while (m--){
        cin >> u >> v >> w;
        adj[u][v] = w;
        adj[v][u] = w;
    }

    vis = vi(n, 0);
    
    cout << tsp(0, 1) << endl;
}