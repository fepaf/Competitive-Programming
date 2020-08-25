#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
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

int n, pai[MAX];

void init(int n){
    for (int i=0; i<=n; ++i){
        pai[i] = i;
    }
}

int find(int u){// retorna representante do conjuinto do u
    if (u == pai[u]) return pai[u];
    return (pai[u] = find(pai[u])); //path compression
}

void join(int u, int v){// "union" une conjunto do u com conjunto do v
    u = find(u);
    v = find(v);
    pai[v] = u;
}

int x, y;
string op;

int main(){_
    cin >> n;
    init(n);
    while (cin >> op){
        if (op == "f"){
            cin >> x;
            cout << find(x) << '\n'; //diz qual o representante do conjunto de x
        } else if (op == "u"){
            cin >> x >> y;
            join(x, y); // une todos elementos do conjunto do x com todos do y
            cout << "uniu\n";
        } else if(op == "s"){
            cin >> x >> y;
            if (find(x)==find(y)){
                cout << "MESMO conjunto\n";
            } else{
                cout << "conjuntos DIFERENTES (DISJUNTOS)\n";
            }
        }
    }
    return 0;
}
