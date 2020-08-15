#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MAXN  (1<<10) // 2**10=1024 aporximadamente 1000
#define MOD 1000000007
#define UNVISITED 0
#define VISITED 1
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

/*lista de Adjacencia nao direcionado e nao ponderado*/
/*BFS 0-1*/

int n; //número vertices
int m; //números arestas
int u, v, w; // vertice de uma aresta de u -> v, com peso w
vvi adj;
vi dist; //dist[u] guarda a distancia de u para s se eh INF, nao foi alcançado ainda

/*
dk[] = {-1,0,1,0}
i,j
for (int k=4; k--;){
    a = i+dk[k];
    b = j+dk[3-k];
}
*/

void bfs(int s){
    queue<int> fila;
    dist = vi(n+1, INF);

    fila.push(s);
    dist[s] = 0;
    while (!fila.empty()){
        int u = fila.front(); fila.pop();
        // logica do bfs para o vértice da vez
        cout << u << ' ' << dist[u] << endl;
        for(int v : adj[u]){
            if (dist[v]==INF){
                fila.push(v);
                dist[v] = dist[u] + 1;
            }
        }
    }
}

int main(){_
    cin >> n >> m;
    adj = vvi(n+1);
    for (int i=m; i--;){
        cin >> u >> v;
        adj[u].eb(v);// u->v
        adj[v].eb(u);// v->u
    }
    //algoritmo
    bfs(5);
    return 0;
}
