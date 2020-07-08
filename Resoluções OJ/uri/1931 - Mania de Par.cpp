// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Mania de Par
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1931

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF 1000000123
#define MAXN 11234

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

vii adj[2*MAXN];
vi dist;
int n,m,u,v,w;

int pos(int u,int a){return 2*u+a;}
int vert(int u){return u>>1;}
int par(int u){return u&1;}

void dijkstra(int s){
    priority_queue <ii, vector<ii>, greater<ii> > pq; pq.push(make_pair(0,s));
    dist.assign(2*(n+1),INF);dist[s]=0;
    while (!pq.empty()){
        ii front=pq.top(); pq.pop();
        int d=front.first, u=front.second;
        if (d>dist[u]) continue;
        for (int i=0;i<adj[u].size();i++){
            int v=adj[u][i].first, w=adj[u][i].second;
            if (dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                pq.push(make_pair(dist[v],v));
            }
        }
    }
}

int main(){_
    while (cin>>n>>m){
        for (int i=m;i--;){
            cin>>u>>v>>w;
            u-- , v--;
            adj[pos(u,0)].push_back(make_pair(pos(v,1),w));
            adj[pos(v,0)].push_back(make_pair(pos(u,1),w));
            adj[pos(u,1)].push_back(make_pair(pos(v,0),w));
            adj[pos(v,1)].push_back(make_pair(pos(u,0),w));
        }
        dijkstra(pos(0,0));
        cout<<(dist[pos(n-1,0)]==INF ? -1 : dist[pos(n-1,0)])<<endl;
        for (int i=0;i<2*n+2;i++) adj[i].clear();
    }
    return 0;
}



