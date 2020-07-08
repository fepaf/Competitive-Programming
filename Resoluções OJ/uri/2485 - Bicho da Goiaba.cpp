// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bicho da Goiaba
// Nível: 2
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2485

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 102
#define EPS (1e-7)
#define MOD 1000000007
#define UNVISITED -1
#define VISITED 1
#define ull unsigned long long
#define ll long long
#define ii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>
#define fs first
#define sc second
#define pb push_back
#define mp make_pair

using namespace std;

vvi adj;
vi vis,dist;
int t,a,b,x,y,goi[MAX][MAX],ans=0;
queue <int> fila;

int vert(int i, int j){return i*(b+2)+j;}

int main(){_
    for (cin>>t;t--;){
        cin>>a>>b;
        adj = vvi((a+2)*(b+2));
        for (int i=1;i<=a;i++){
            for (int j=1;j<=b;j++){
                cin>>goi[i][j];
            }
        }
        cin>>x>>y;
        for (int i=1;i<=a;i++){
            for (int j=1;j<=b;j++){
                int u=vert(i,j);
                if (!goi[i][j]) continue;
                for (int k=-1;k<=1;k++){
                    for (int l=-1;l<=1;l++){
                        if ((k||l) && goi[i+k][j+l]) adj[u].pb(vert(i+k,j+l));
                    }
                }
            }
        }
        dist = vi((a+2)*(b+2),-1);
        fila.push(vert(x,y)), dist[vert(x,y)]=0;
        ans=0;
        while (!fila.empty()){
            int u=fila.front(); fila.pop();

            ans=max(ans,dist[u]);

            int tam=adj[u].size();
            for (int i=0;i<tam;i++){
                int v=adj[u][i];
                if (dist[v]==-1){
                    fila.push(v);
                    dist[v]=dist[u]+1;
                }
            }
        }
        cout<<ans<<endl;
        for (int i=1;i<=a;i++) for (int j=1;j<=b;j++) goi[i][j]=0;
    }
    return 0;
}

