#include<bits/stdc++.h>
#define MAX (1<<20)
#define UNVISITED 0
#define VISITED 1
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back

using namespace std;

int n, m, s;
int u, v;
int a[MAX];
int memo[MAX];
vvi adj;

int dfs(int u){
    int ans = 0;
    if (~memo[u]) return memo[u];
    for (int v : adj[u]){
        ans = max(ans, 1+dfs(v));
    }
    return memo[u] = ans;
}

int main(){
    cin >> n >> m >> s;

    for (int i=1; i<=n; ++i){
        cin >> a[i];
        memo[i] = -1;
    }

    adj = vvi(n+1);

    while (m--){
        cin >> u >> v;
        if (a[u] > a[v]){
            adj[u].eb(v);
        }
        if (a[v] > a[u]){
            adj[v].eb(u);
        }
    }

    cout << dfs(s) << endl;

    return 0;
}