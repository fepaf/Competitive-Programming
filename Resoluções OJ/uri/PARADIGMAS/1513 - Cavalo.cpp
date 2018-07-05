// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Cavalo
// Nível: 7
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1513

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define vvi vector<vi>
#define MAX 1<<9
#define ps(i,j) ((i)*(m+2)+(j))
#define psi(x) ((x)/(m+2))
#define psj(x) ((x)%(m+2))
#define in(x,y) (1<=(x) && (x)<=n && 1<=(y) && (y)<=m)
#define pb push_back
#define fs first
#define sc second
#define UNVISITED -1
#define VISITED 1
#define LIVRE -1
#define BLOCK -2

using namespace std;

int n,m,k,orig,dj[]={-2,-1,1,2,2,1,-1,-2},di[]={-1,-2,-2,-1,1,2,2,-1},memo[16][1<<16],adj[1<<4][1<<4],t[MAX][MAX],id;
char tab[MAX][MAX];
vi peca,dist;

int tsp(int u, int vis){
    if (vis == (1<<k)-1) return adj[u][0];
    if (memo[u][vis]!=-1) return memo[u][vis];
    int ans = INF;
    for (int v=0;v<k;v++) if (!(vis&(1<<v)))ans=min(ans,adj[u][v]+tsp(v,vis|(1<<v)));
    return memo[u][vis]=ans;
}

void bfs(int s){
    queue<int> fila; fila.push(s);
    vi dist = vi((n+2)*(m+2)+10,INF); dist[s]=0;
    s=t[psi(s)][psj(s)];
    while (!fila.empty()){
        int u=fila.front(); fila.pop();
        int i=psi(u),j=psj(u);

        if (t[i][j]>-1) {
            int x=min(min(adj[s][t[i][j]],adj[t[i][j]][s]),dist[u]);
            adj[s][t[i][j]]=adj[t[i][j]][s]=x;
        }

        for (int l=8; l--;){
            int a=i+di[l],b=j+dj[l];
            int v=ps(a,b);
            if (in(a,b) && tab[a][b]!='#' && dist[v]==INF){
                dist[v]=dist[u]+1;
                fila.push(v);
            }
        }
    }
}

int main(){_
    while ((cin>>n>>m>>k) && (n+m+k)){
        id=1; ++k;
        for (int i=0; i<k; i++) for (int j=0; j<k; j++) adj[i][j] = (i!=j)*INF;

        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                cin>>tab[i][j];
                if (tab[i][j]=='P'){
                    t[i][j]=id++;
                    peca.pb(ps(i,j));
                }
                else if (tab[i][j]=='C'){
                    t[i][j]=0;
                    peca.insert(peca.begin(),ps(i,j));
                }
                else if (tab[i][j]=='.'){
                    t[i][j]=LIVRE;
                }
                else t[i][j]=BLOCK;
                // cout<<setw(4)<<-t[i][j];
            }
            // cout<<endl;
        }


        for (int i=0; i<k; i++){
            // cout<<peca[i]<<" ";
            bfs(peca[i]);
        }
        /*cout<<endl;
        for (int i=0; i<k; i++){
            for (int j=0; j<k; j++){
                cout<<(adj[i][j] == INF ? -1 : adj[i][j])<<" ";
            }
            cout<<endl;
        }*/

        for (int i=k;i--;) for (int j=(1<<k);j--;) memo[i][j]=-1;

        cout<<tsp(0,1)<<endl;
        peca.clear();
    }
    return 0;
}

