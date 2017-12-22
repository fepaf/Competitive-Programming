// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Invertendo Setas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2576

#include<bits/stdc++.h>
#define INF 1000000123
#define ii pair<int,int>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define pb push_back
#define fs first
#define sc second
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,a,b ,u,v,bibi,bibika;
vvii adj;
vi dist;

int dijkstra(int s, int t){
    priority_queue <ii, vii , greater<ii> > pq;
    dist = vi(n+1,INF);
    pq.push(ii(0,s));
    dist[s]=0;
    while (!pq.empty()){
        ii front = pq.top(); pq.pop();
        int d = front.fs, u = front.sc;
        if (d>dist[u]) continue;
        if (u==t) return dist[u];
        for (auto x : adj[u]){
            int v=x.fs, w=x.sc;
            if (dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                pq.push(ii(dist[v],v));
            }
        }
    }
    return dist[t];
}

int main(){_
    while (cin>>n>>m>>a>>b){
        adj = vvii(n+1);
        for (int i=m;i--;){
            cin>>u>>v;
            adj[u].pb(ii(v,0));
            adj[v].pb(ii(u,1));
        }
        bibi=dijkstra(a,b) , bibika=dijkstra(b,a);
        if (bibi==bibika) cout<<"Bibibibika"<<endl;
        else if (bibi<bibika) cout<<"Bibi: "<<bibi<<endl;
        else cout<<"Bibika: "<<bibika<<endl;
    }
    return 0;
}

