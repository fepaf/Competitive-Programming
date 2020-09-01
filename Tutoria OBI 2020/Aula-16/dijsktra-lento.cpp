#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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
#define W(x) cerr << "\033[31m"<<  #x << " = " << x << "\033[0m" << endl;

using namespace std;

/*
matriz adjacencia
nao direcionado
1 - indexado
*/

int n;
int m;
int s;
int u, v, w;
int adj[1<<10][1<<10];

int dist[1<<10], proc[1<<10];

void dijkstra(int s){
    for (int i=0; i<=n; ++i){
        dist[i] = INF;
        proc[i] = 0;
    }
    dist[s] = 0;

    for (int i=1; i<=n; ++i){
        u = 0;//nunca usado
        for (int j=1; j<=n; ++j){
            if (!proc[j] && dist[j] <= dist[u]){
                u = j;
            }
        }
        proc[u] = 1;

        for (int v=1; v<=n; ++v){
            w = adj[u][v];
            if (w!=INF && dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
            }
        }
    }
}

int main(){_
    cin >> n >> m;

    for (int i=0; i<=n; ++i){
        for (int j=0; j<=n; ++j){
            adj[i][j] = INF;
        }
    }

    for (int i=0; i<m; ++i){
        cin >> u >> v >> w;
        adj[u][v] = w;
        adj[v][u] = w;
    }

    cin >> s;

    dijkstra(s);

    for (int i=1; i<=n; ++i){
        cout << i << " " << dist[i] << "\n";
    }
    
    return 0;
}
