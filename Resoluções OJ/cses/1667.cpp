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

/*
Problem: Message Route
Link: https://cses.fi/problemset/task/1667
*/
 
int n, m, u, v, tam, s, t;
vi g[MAX];
vi dist; // dist[u] diz a distancia em arestas de U para S
vi ant; // ant[u] diz o vértice que vem antes no caminho de S até U
vi path;
queue<int> fila;

int bfs(int s, int t){

    fila.push(s);
    dist[s] = 1;

    while (!fila.empty()){
        int  u = fila.front(); fila.pop();

        for (int v : g[u]){
            if (dist[v]==INF){ // nao foi visitado, calculo pela primeira vez
                dist[v] = dist[u] + 1;
                ant[v] = u;
                fila.push(v);
            } else if (dist[v] == dist[u] + 1){ // Estou achando um caminho alternativo por U para V
                ant[v] = min(ant[v], u);//logica desempate
            }
        }
    }

    return dist[t];
}


int main(){_
    cin >> n >> m >> s >> t;
    while (m--){
        cin >> u >> v;
        g[u].eb(v); 
        g[v].eb(u); 
    }
    
    dist = vi(n+1, INF);
    ant = vi(n+1, -1);
    
    tam = bfs(s, t);

    if (tam != INF){
        cout << tam << endl;
        for (int u=t; u!=-1; u=ant[u]){
            path.eb(u);
        }
        reverse(all(path));
        for (int u : path){
            cout << u << ' ';
        }
        cout << endl;
    } else {
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}
