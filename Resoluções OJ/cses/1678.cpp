#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
#define MOD 1000000007
#define i64 long long
#define all(x) (x).begin() , (x).end()
#define sz(x) (int)(x).size()
#define ii antr<int, int>
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
#define branco 0
#define cinza -1
#define preto 1

using namespace std;

/*
Problem: Round Trip II
Link: https://cses.fi/problemset/task/1678
*/

int n, m, u, v;
vvi adj;
vi cor, ant, path;

int dfs(int u){
    cor[u] = cinza;
    for (int v : adj[u]){
        if (cor[v] == branco){
            ant[v] = u;
            dfs(v);
        } else if (!sz(path) && (cor[v] == cinza)){
            path.eb(v);
            for (int x = u; x != ant[v]; x = ant[x]){
                path.eb(x);
            }
        }
    }
    cor[u] = preto;
}

int main(){_
    cin >> n >> m;
    adj = vvi(n+1);
    while (m--){
        cin >> u >> v;
        adj[u].eb(v);
    }
    cor = vi(n+1, branco);
    ant = vi(n+1, -1);
    for (int i=1; i<=n; ++i){
        if (!sz(path) && cor[i] == branco){
            dfs(i);
        }
    }
    if (sz(path)){
        reverse(all(path));
        cout << sz(path) << endl;
        for (int u : path){
            cout << u << ' ';
        }
        cout << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}
