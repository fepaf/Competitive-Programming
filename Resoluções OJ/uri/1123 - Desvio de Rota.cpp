// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Desvio de Rota
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1123

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 1000000123
#define MAXN 255
#define zera() for (int i=0;i<n;i++) for (int j=0;j<n;j++) dist[i][j]=(i!=j)*INF;

using namespace std;

int u,v,p,n,m,c,b,ans,dist[MAXN][MAXN],rota[MAXN];

int main() {_
    while ((cin>>n>>m>>c>>b)&&(n||m||c||b)){
        zera();
        while (m--){
            cin>>u>>v>>p;
            dist[u][v]=dist[v][u]=p;
        }

        rota[c-1]=0;
        for (int i=c-2;i>=0;i--) rota[i]=rota[i+1]+dist[i][i+1];
        
        for (int k=c-1;k<n;k++)
            for (int i=0;i<n;i++)
                for (int j=0;j<n;j++) dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
        
        
        ans=dist[b][c-1];
        for (int i=c-2;i>=0;i--) ans=min(ans,dist[b][i]+rota[i]);
        
        cout<<ans<<endl;
    }
    return 0;
}
