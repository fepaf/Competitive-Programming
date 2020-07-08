// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Cidade no Centro
// Nível: 7
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2676

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<7)
#define INF 0x3f3f3f3f

using namespace std;

int dist[MAX][MAX],a,b,d,n,r,sum[MAX],big;

int main(){_
    while ((cin>>n>>r)&&(n||r)){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                dist[i][j] = INF*(i!=j);
            }
        }

        while (r--){
            cin>>a>>b>>d;
            dist[a][b] = dist[b][a] = d;
        }

        for (int k=1;k<=n;k++){
            for (int i=1;i<=n;i++){
                for (int j=1;j<=n;j++){
                    dist[i][j] = min(dist[i][j],dist[i][k]+dist[k][j]);
                }
            }
        }
        big = INF;
        for (int i=1;i<=n;i++){
            sum[i] = 0;
            for (int j=1;j<=n;j++){
                sum[i] += dist[i][j]!= INF ? dist[i][j] : 0;
            }
            // cout<<i<<'-'<<sum[i]<<endl;
            big = min(big,sum[i]);
        }
        for (int i=1;i<=n;i++){
            if (sum[i]==big) cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}

