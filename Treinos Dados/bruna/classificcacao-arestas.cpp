#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#define INF 0x3f3f3f3f
#define MAX (1<<20)
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

int n, m;
int u, v, w;
vi g[MAX];
vi num, pai; // num[i] = 0, se não foi visitado, 1 - se processando , 2 - processado

int dfs(int u, int p){
    num[u] = 1; // processando
    pai[u] = p;

    for (int v : g[u]){
        if (!num[v]){
            dfs(v, u);
            cout << u << ' ' << v << ": arvore" << endl;
        } else if (num[v] == 1 && v!=pai[u]){
            cout << u << ' ' << v << ": retorno" << endl; // ja exite ciclo
        } else if (num[v] == 2 && v!=pai[u]){
            cout << u << ' ' << v << ": avanço" << endl;
        }
    }
    
    num[u] = 2; // Ele já passou por todos os filhos de U
}

int main(){_
    cin >> n >> m;
    while (m--){
        cin >> u >> v; // não poderado
        g[u].eb(v);
        g[v].eb(u); // nao direcionado
    }
    num = vi(n+1, 0);// inicia todos como não visitados
    pai = vi(n+1, -1); // -1 indica que o ǘertice não tem pai
    dfs(1, -1);

    return 0;
}
