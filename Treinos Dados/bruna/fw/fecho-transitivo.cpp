#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<10)
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

//Problema: Fecho transitivo

int reach[MAX][MAX]; // N<=100 , mas forçando, em OJs poderosos, N~500
// reach[u][v] no final, diz se existe um caminho de u para v
int n; // número de vértices
int m; // número de arestas
int u, v, w, ans;

int main(){_
    cin >> n >> m;
    
    //Floyd Warshhal Inicialização
    for (int i=0; i<n; ++i){
        for (int j=0; j<n; ++j){
            reach[i][j] = (i==j ? 1 : 0);
        }
    }

    //Leitura das adjacências iniciais 
    while (m--){
        cin >> u >> v;
        reach[u][v] = 1;
        // reach[v][u] = 1; // se for nao direcionado
    }

    //Processamento do Floyd-Warshall
    for (int k=0; k<n; ++k){ // Posso usar até o vértice K como intermediário
        for (int i=0; i<n; ++i){
            for (int j=0; j<n; ++j){
                reach[i][j] = (reach[i][j] | (reach[i][k] & reach[k][j]));
            }
        }
    }

    ans = INF;
    for (int i=0; i<n; ++i){
        ans = min(ans, reach[i][i]);
    }

    cout << ans << endl;

    return 0;
}
