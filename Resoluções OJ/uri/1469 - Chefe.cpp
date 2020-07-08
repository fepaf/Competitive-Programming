// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Chefe
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1469

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define ii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long
#define MAX (1<<10)

using namespace std;

vvi adj;
int n,m,inst,u,v,w,pos[MAX],idd[MAX],ans;
char op;

int main(){_
    while (cin>>n>>m>>inst){
        adj = vvi(n+1,vi(n+1,0));
        for (int i=1;i<=n;i++){
            cin>>idd[i];
            pos[i]=i;
        }
        while (m--){
            cin>>u>>v;
            adj[u][v] = 1;
        }
        for (int k=1;k<=n;k++){
            for (int i=1;i<=n;i++){
                for (int j=1;j<=n;j++){
                    adj[i][j] |= (adj[i][k] & adj[k][j]);
                }
            }
        }
        for (int i=1;i<=n;i++) adj[i][i]=0;
        while (inst--){
            cin>>op;
            if (op=='T'){
                cin>>u>>v;
                swap(idd[pos[u]],idd[pos[v]]);
                swap(pos[u],pos[v]);
            }
            else {
                cin>>v;
                ans = INF;
                for (int u=1;u<=n;u++){
                    if (adj[u][pos[v]]){
                        ans = min(ans, idd[u]);
                    }
                }
                if (ans == INF){
                    cout<<'*'<<endl;
                }
                else{
                    cout<<ans<<endl;
                }
            }
        }
    }
    return 0;
}

