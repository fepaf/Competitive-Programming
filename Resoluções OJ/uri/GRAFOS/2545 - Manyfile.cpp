// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Manyfile
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2545

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define MAX 1000123
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define ll long long

using namespace std;

vvi adj;
vi dist,ge;
int n,m,ans,saida,u,v;
queue<int> fila;

int main(){_
    while (cin>>n){
        adj = vvi(n+1); dist = vi(n+1,INF); ge = vi(n+1);
        for (int u=1;u<=n;u++){
            cin>>m;
            while (m--){
                cin>>v;
                adj[v].eb(u);
                ++ge[u];
            }
        }
        for (int u=1;u<=n;u++){
            if (!ge[u]){
                fila.push(u);
                dist[u]=1 ;
            }
            // cout<<"botou"<<endl;
        }
        ans=saida=0;
        while (!fila.empty()){
            u = fila.front(); fila.pop();
            ans = max(ans,dist[u]);
            ++saida;
            for (int v : adj[u]){
                if (!(--ge[v])){
                    dist[v] = dist[u]+1;
                    fila.push(v);
                }
            }
        }
        cout<<(saida==n ? ans : -1)<<endl;
    }
    return 0;
}

