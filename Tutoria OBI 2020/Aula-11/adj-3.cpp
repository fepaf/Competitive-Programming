#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MAXN  (1<<10) // 2**10=1024 aporximadamente 1000
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

/*matriz de Adjacencia direcionado e ponderado*/

int n; //número vertices
int m; //números arestas
int u, v, w; // vertice de uma aresta de u -> v, com peso w
int adj[MAXN][MAXN];

int main(){_
    cin >> n >> m;
    for (int i=m; i--;){
        cin >> u >> v >> w;
        adj[u][v] = w;
        // adj[v][u] = w;
    }
    //algoritmo
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=n; ++j){
            cout << adj[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}
