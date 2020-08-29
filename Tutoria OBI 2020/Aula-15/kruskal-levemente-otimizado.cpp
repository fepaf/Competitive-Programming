#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define INF 0x3f3f3f3f
#define MAX (1<<20)
//maximo de vertices
#define MAXN (1<<20)
//maximo de arestas
#define MAXM (1<<17)
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

int n; // qtd vértices
int m; // qtd arestas

int pai[MAXN];// 

void init(int n){
    for (int i=0; i<=n; ++i){
        pai[i] = i;
    }
}

int id(int n){ // FIND, acha o representante do conjunto
    if (pai[n] == n) return pai[n];
    return pai[n] = id(pai[n]);
}

void join(int u, int v){//UNION, une o conjunto do U com o do V
    u = id(u), v = id(v);
    pai[v] = u;
}
//--------------------------

struct aresta{
    int u, v; // extremidades da aresta
    int w; // peso da arestas
};

aresta arestas[MAXM];

int cmp(aresta a, aresta b){
    return a.w < b.w;
}

int kruskal(){
    int ans = 0;
    
    sort(arestas, arestas+m, cmp);

    for (int i=0, j=0; i<m && j<n-1; ++i){
        int u = arestas[i].u;
        int v = arestas[i].v;
        int w = arestas[i].w;
        
        if (id(u) != id(v)){
            ++j;
            ans += w;
            join(u, v);
        }
    }

    return ans;
}

int u, v, w;

int main(){_
    cin >> n >> m;

    init(n);

    for (int i=0; i<m; ++i){
        cin >> u >> v >> w; // cin >> arestas[i].u >> arestas[i].v >> arestas[i].w;
        arestas[i] = {u,v,w};
    }
    
    cout << kruskal() << endl;
    return 0;
}
