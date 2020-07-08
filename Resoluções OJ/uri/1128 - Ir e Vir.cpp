// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ir e Vir
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1128

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define UNVISITED -1
#define VISITED 1
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back

using namespace std;

vi num,s;
vvi adj,adjt;
int n,m,u,v,p,nscc;

void dfs(int u, int pass){
    num[u] = VISITED;
    vi vizinhos = pass ? adj[u] : adjt[u];
    for (int v : vizinhos){
        if (num[v]==UNVISITED){
            dfs(v,pass);
        }
    }
    s.eb(u);
}

int main(){_
    while ((cin>>n>>m)&&(n||m)){
        adj = vvi(n+1); adjt = vvi(n+1);
        while (m--){
            cin>>u>>v>>p;
            adj[u].eb(v);
            adjt[v].eb(u);
            if (p==2){
                adj[v].eb(u);
                adjt[u].eb(v);
            }
        }
        num.assign(n+1,UNVISITED); s.clear();
        for (int i=1; i<=n; i++){
            if (num[i]==UNVISITED){
                dfs(i,1);
            }
        }
        num.assign(n+1,UNVISITED); nscc=0;
        for (int i=n; i>=1; i--){
            if (num[s[i-1]]==UNVISITED){
                dfs(s[i-1],0);
                ++nscc;
            }
        }
        cout<<(nscc==1)<<endl;
    }
    return 0;
}

