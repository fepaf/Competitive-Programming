#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
// #define endl '\n'
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

int n, m;
int u, v;
vvi adj;
vi vis, graue, ord;

int kahn(){
    queue<int> fila;

    for (int u=1; u<=n; ++u){
        if (graue[u]==0){
            fila.push(u);
        }
    }

    while (!fila.empty()){
        int u = fila.front(); fila.pop();

        ord.eb(u);

        for (int v : adj[u]){
            --graue[v];
            if (graue[v] == 0){
                fila.push(v);
            }
        }
    }
    
    return (sz(ord) == n);
}

int main(){_
    cin >> n >> m;
    
    adj = vvi(n+1);
    vis = vi(n+1, 0);
    graue = vi(n+1, 0);

    while (m--){
        cin >> u >> v;
        adj[u].eb(v);
        ++graue[v];
    }

    if (kahn()){
        for (int u : ord){
            cout << u << ' ';
        }
        cout << endl;
    }else {
        cout << "Contem ciclo direcionado" << endl;
    }

    return 0;
}
