// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Dona Minhoca
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1711

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define pb push_back
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define vvii vector<vii>
#define vvi vector<vi>
#define fs first
#define sc second

using namespace std;

vvii adj;
vi pai,timer,low,tam_ciclo_x2;
int n,m,u,v,w,q,maiorciclo,t,ans;

void dfs_low(int u, int pai){
    timer[u] = low[u] = t++;
    for (ii nxt : adj[u]){
        int v = nxt.fs;
        if (!timer[v]){
            dfs_low(v,u);
            low[u] = min(low[u],low[v]);
        }else if (v!=pai && low[v]<low[u]){
            low[u]=low[v];
        }
    }
}

int djk(int s, int tam){
    priority_queue<ii , vii, greater<ii> > pq; pq.push(ii(0,s));
    vi dist = vi(n+1,INF); dist[s]=0;
    ans=INF;

    while (!pq.empty()){
        ii nxt=pq.top(); pq.pop();
        int d=nxt.fs, u=nxt.sc;
        if (2*tam<=tam_ciclo_x2[low[u]]){
            ans = min(ans, 2*dist[u]+tam_ciclo_x2[low[u]]/2);
        }
        if (d>dist[u]) continue;
        for (ii nxt : adj[u]){
            int v=nxt.fs, w=nxt.sc;
            if (dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                pq.push(ii(dist[v],v));
            }
        }
    }
    return ans;
}

int main(){_
    while (cin>>n>>m){
        adj = vvii(n+1);
        while (m--){
            cin>>u>>v>>w;
            adj[u].pb(ii(v,w));
            adj[v].pb(ii(u,w));
        }
        low = vi(n+1,0), timer = vi(n+1,0), tam_ciclo_x2 = vi(n+1,0), t=1, maiorciclo=-1;
        dfs_low(1,-1);
        for (int u=1; u<=n; u++){
            for (ii nxt : adj[u]){
                v = nxt.fs , w = nxt.sc;
                if (low[u] == low[v]){
                    tam_ciclo_x2[low[u]] += w;
                }
            }
            maiorciclo = max(maiorciclo,tam_ciclo_x2[low[u]]/2);
        }
        cin>>q;
        while (q--){
            cin>>u>>w;
            if (w <= maiorciclo){
                cout<<djk(u,w)<<endl;
            }
            else {
                cout<<"-1"<<endl;
            }
        }
    }
    return 0;
}

