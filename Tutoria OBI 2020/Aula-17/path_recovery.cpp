#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (110)
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

int n, m;
int dist[MAX][MAX][MAX];// dist[k][u][v] guarda peso do menor caminho de U para V, usando de 1 a K como vértices intermediários
int u, v, w;
int ant[MAX][MAX];//ant[i][j] é o vertice anterior a j no caminho de i para j, ou seja, i->...->ant[i][j]->j

void fw(int n){
    for (int k=1; k<=n; ++k){
        for (int i=1; i<=n; ++i){
            for (int j=1; j<=n; ++j){
                if (dist[k-1][i][j] >= dist[k-1][i][k] + dist[k-1][k][j]){
                    dist[k][i][j] = dist[k-1][i][k] + dist[k-1][k][j];
                    ant[i][j] = ant[k][j];
                }else {
                    dist[k][i][j] = dist[k-1][i][j];
                }
            }
        }
    }
}

void path(int i, int j){//imprime do i para j
    if (j!=-1) {
        path(i, ant[i][j]);
        cout << "-" << j;
    }
    else{
        cout << i;
    }
}

void path_iterativo(int i, int j){ //imprime de j para i
    for (int u=j; u!=-1; u=ant[i][u]){
        cout << u << " ";
    }
}

int main(){_
    cin >> n >> m;

    for (int i=0; i<=n; ++i){
        for (int j=0; j<=n; ++j){
            dist[0][i][j] = (i!=j ? INF : 0);
            ant[i][j] = -1; 
        }
    }

    while(m--){
        cin >> u >> v >> w;
        dist[0][u][v] = w;
        dist[0][v][u] = w;
    }

    fw(n);

    for (int i=1; i<=n; ++i){
        for (int j=1; j<=n; ++j){
            path(i,j);
            cout << endl;
            cout << dist[n][i][j] << "\n";
        }
        cout << endl;
    }
    return 0;
}
