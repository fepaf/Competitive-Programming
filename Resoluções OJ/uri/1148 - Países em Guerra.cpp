// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Países em Guerra
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1148

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<9)
#define INF 0x3f3f3f3f

using namespace std;

int n,e,x,y,h,o,d,adj[MAX][MAX],fecho[MAX][MAX],q;

int main(){_
    while ((cin>>n>>e)&&(n||e)){

        for (int i=n+1;i--;){
            for (int j=n+1;j--;){
                adj[i][j] = (i!=j)*INF;
                fecho[i][j] = (i==j);
            }
        }

        while (e--){
            cin>>x>>y>>h;
            adj[x-1][y-1] = h;
            fecho[x-1][y-1] = 1;
        }

        for (int k=0; k<n; k++){
            for (int i=0; i<n; i++){
                for (int j=0; j<n; j++){
                    fecho[i][j] |= (fecho[i][k]&fecho[k][j]);
                }
            }
        }

        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                adj[i][j] = (fecho[i][j] & fecho[j][i] ? 0 : adj[i][j]);///merda!
            }
        }

        for (int k=0; k<n; k++){
            for (int i=0; i<n; i++){
                for (int j=0; j<n; j++){
                    adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j]);
                }
            }
        }

        for (cin>>q; q--;){
            cin>>o>>d;
            --o , --d;
            cout<<(fecho[o][d] ? to_string(adj[o][d]) : "Nao e possivel entregar a carta")<<endl;
        }
        cout<<endl;
    }
    return 0;
}

