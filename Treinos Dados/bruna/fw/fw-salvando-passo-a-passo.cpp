#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (100)
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

int dist[MAX][MAX][MAX]; // N<=100 , mas forçando, em OJs poderosos, N~500
// dist[x][u][v] no final, guarda o peso do menor caminho de u->v usando somente os X primeiros vértices como intermediários
int n; // número de vértices
int m; // número de arestas
int u, v, w;

int main(){_
    cin >> n >> m;
    
    //Floyd Warshhal Inicialização
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=n; ++j){
            // if (i==j){
            //     dist[i][j] = 0;
            // } else {
            //     dist[i][j] = INF;
            // }
            dist[0][i][j] = (i==j ? 0 : INF);
        }
    }

    //Leitura das adjacências iniciais 
    while (m--){
        cin >> u >> v >> w;
        dist[0][u][v] = w;
        dist[0][v][u] = w; // se for nao direcionado
    }

    //Processamento do Floyd-Warshall
    for (int k=1; k<=n; ++k){ // Posso usar até o vértice K como intermediário
        for (int i=1; i<=n; ++i){
            for (int j=1; j<=n; ++j){
                dist[k][i][j] = min(dist[k-1][i][k]+dist[k-1][k][j], dist[k-1][i][j]);
            }
        }
    }

    //Imprimindo saída
    int l,r,t;
    while (cin >> l >> r >> t){
        cout << dist[t][l][r] << endl;
    }

    return 0;
}
