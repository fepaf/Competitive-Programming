#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MAX (1<<20)
#define INF 0x3f3f3f3f

using namespace std;

int n, m, s;
int u, v;
int a[MAX];
int adj[1<<8][1<<8];
int ans;

int main(){
    cin >> n >> m >> s;

    for (int i=1; i<=n; ++i){
        cin >> a[i];
        for (int j=1; j<=n; ++j){
            adj[i][j] = 0;
        }
    }

    while (m--){
        cin >> u >> v;
        if (a[u] > a[v]){
            adj[u][v] = 1;
        }
        if (a[v] > a[u]){
            adj[v][u] = 1;
        }
    }

    for (int k=1; k<=n; ++k){
        for (int i=1; i<=n; i++){
            for (int j=1; j<=n; ++j){
                adj[i][j] |= (adj[i][k] & adj[k][j]);
            }
        }
    }

    ans = 0;
    for (int i=1; i<=n; ++i){
        ans += adj[s][i];
    }

    cout << ans << endl;
    return 0;
}