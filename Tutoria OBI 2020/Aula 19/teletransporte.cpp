#include <bits/stdc++.h>
#define MAXN 100000
#define MAXK 1000
#define MAXM 1000
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back

using namespace std;

int n, m, k, a;
vvi adj;
queue <int> fila;
int dist[MAXN+MAXM];

int main() {
    scanf("%d %d %d", &n, &k, &m);
    adj = vvi(n+m+1);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < k; ++j) {
            scanf("%d", &a);
            adj[n+1+i].eb(a);
            adj[a].eb(n+1+i);
        }
    }

    memset(dist, -1, sizeof(dist));
    dist[1] = 0;
    fila.push(1);
    while (!fila.empty()) {
        int u = fila.front(); fila.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                fila.push(v);
            }
        }
    }
    
    printf("%d\n",  (dist[n] != -1 ? dist[n]/2+1 : -1));

    return 0;
}
