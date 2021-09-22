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

int n, u, v, op;

int pai[MAX]; //pai[u] é o cara imediatamente acima de  U


void init(int n){
    for (int i=n+1; i--;){// de N a 0
        pai[i] = i;
    }
}

int id(int u){ // acha o representante do conjunto do U
    // if (u == pai[u]){
    //     return u;
    // }
    // return id(pai[u]);
    return (u == pai[u] ? u : (pai[u] = id(pai[u])));
}

void join(int u, int v){ //une todos os elementos conjunto do U com todos os elementos o conjunto do V
    pai[id(v)] = id(u);
}

int main(){_
    cin >> n;
    init(n); //inicializa tudo que preciso para usar o dsu
    while ((cin >> op) && op!=-1){
        if (op == 1){
            cin >> u >> v;
            join(u,v);
            cout << "uniu o conjunto do " << u << " com o do " << v << endl;
        }
        if (op == 2){
            cin >> u >> v;
            if (id(u) == id(v)){
                cout << "são do mesmo conjunto" << endl;
            } else {
                cout << "conjuntos disjuntos" << endl;
            }
        }
    }
    return 0;
}
