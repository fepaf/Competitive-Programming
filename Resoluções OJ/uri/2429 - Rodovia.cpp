// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Rodovia
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2429

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define VISITED 1
#define UNVISITED -1

using namespace std;

vvi adj, adjt;
vi s, num;
int n,a,b,nscc;

int dfs(int u, int pass){
    num[u]=VISITED;
    vi neighbor = (pass==1 ? adj[u] : adjt[u]);
    for (auto v : neighbor){
        if (num[v]==UNVISITED){
            dfs(v,pass);
        }
    }
    s.eb(u);
}

int main(){_
    while (cin>>n){
        adj = vvi(n+1), adjt=vvi(n+1);
        for (int i=n;i--;){
            cin>>a>>b;
            adj[a].eb(b); adjt[b].eb(a);
        }
        num.assign(n+1,UNVISITED);
        for (int i=1;i<=n;i++){
            if (num[i]==UNVISITED) dfs(i,1);
        }
        nscc=0;
        num.assign(n+1,UNVISITED);
        for (int i=n;i--;){
            if (num[s[i]]==UNVISITED){
                nscc++;
                dfs(s[i],2);
            }
        }
        cout<<(nscc==1 ? 'S' : 'N')<<endl;
        s.clear();
    }
    return 0;
}

