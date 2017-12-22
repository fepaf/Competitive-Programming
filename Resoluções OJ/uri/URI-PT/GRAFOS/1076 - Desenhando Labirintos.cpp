// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Desenhando Labirintos
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1076

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 102
#define MOD int(10e9)+7
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back

using namespace std;

int t,i,s,x,n,m,u,v,adj[MAX][MAX],ans;
vi vis;
queue<int> fila;

int main(){_
    for (cin>>t;t--;){
        cin>>s>>n>>m;
        for (int i=n+1;i--;) for (int j=n+1;j--;) adj[i][j]=0;
        while (m--){
            cin>>u>>v;
            adj[u][v]=adj[v][u]=1;
        }
        vis = vi(n+1,UNVISITED);
        fila.push(s), vis[s]=VISITED;
        ans=-1;
        while (!fila.empty()){
            u = fila.front(); fila.pop();

            ans++;

            for (v=0; v<n; v++){
                if (adj[u][v] && vis[v]==UNVISITED){
                    fila.push(v) , vis[v]=VISITED;
                }
            }
        }
        ans<<=1;
        cout<<ans<<endl;
    }
    return 0;
}

