// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Detectando Pontes
// Nível: 2
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1790

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXC 52
#define MAXP 1300
#define ps push_back
#define UNVISITED -1

using namespace std;

typedef vector<int> vi;

vi adj[MAXC],low,num,pai;
int c,p,x,y,timer,bridges;

void dfs(int u){
    num[u]=low[u]=timer++;
    for (int i=0;i<adj[u].size();i++){
        int v=adj[u][i];
        if (num[v]==UNVISITED){
            pai[v]=u;

            dfs(v);

            bridges+=(low[v]>num[u]);

            low[u]=min(low[u],low[v]);

        }else if (v!=pai[u]) low[u]=min(low[u],num[v]);
    }
}

int pontes(int n){
    int ans;
    timer=bridges=0;
    num.assign(n+1,UNVISITED), low.assign(n+1,0), pai.assign(n+1,0);
    dfs(1);
    num.clear(),low.clear(),pai.clear();
    for (int i=1;i<=n;i++) adj[i].clear();
    return bridges;
}

int main(){_
    while (cin>>c>>p){
        while (p--){
            cin>>x>>y;
            adj[x].ps(y);
            adj[y].ps(x);
        }
        cout<<pontes(c)<<endl;
    }
    return 0;
}
