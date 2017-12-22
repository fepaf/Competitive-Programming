#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define MAXN 10123
#define UNVISITED -1
#define VISITED 1
#define i64 long long
#define ii pair<i64,i64>
#define iii pair<int,ii>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define vvvi vector<vvi>
#define eb emplace_back
#define fs first
#define sc second
#define _ ios_base::sync_with_stdio(0);

using namespace std;

vvii adj;
vi vis;
vector<iii> bairros;
int n,m,x,y,b,soma,aresta,bairro;

bool cmp(iii a, iii b){
     if (a.sc.fs*b.sc.sc != b.sc.fs*a.sc.sc) return a.sc.fs*b.sc.sc < b.sc.fs*a.sc.sc;
     return a.fs > b.fs;
}

void dfs(int u){
    vis[u] = VISITED;
    bairro = max(bairro,u);
    for (auto vw : adj[u]){
        int v = vw.fs , w = vw.sc;
        if (vis[v] == UNVISITED){
            vis[v] = VISITED;
            dfs(v);
        }
        soma += w; ++aresta;
    }
}

int main(){_
    while (cin>>n>>m){
        adj = vvii(n+1);
        while (m--){
            cin>>x>>y>>b;
            adj[x].eb(y,b);
            adj[y].eb(x,b);
        }
        vis = vi(n+1,UNVISITED);
        for (int i=1;i<=n;i++){
            soma = aresta = 0;
            if (vis[i]==UNVISITED){
                bairro = i;
                dfs(i);
                bairros.eb(bairro,ii(soma>>1,(aresta>>1)+(!aresta)));
            }
        }
        sort(bairros.begin(),bairros.end(),cmp);
        cout<<bairros[0].fs<<endl;
        bairros.clear();
    }
    return 0;
}
