// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Zak Galou
// Nível: 7
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1409

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f3f
#define ii pair<ll,int>
#define vi vector<ll>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long
#define MAX (1<<10)

using namespace std;

int mana[MAX],dano[MAX],a,b,m,n,g,k;
ll needed[MAX];
vvi adj,saloes;
vi acum;

inline ll djk(int s, int t){
    vi dist = vi(n+1,INF);
    priority_queue <ii, vector<ii>, greater<ii> > pq; pq.push(ii(acum[s],s));
    dist[s] = acum[s];
    while (!pq.empty()){
        ii par = pq.top(); pq.pop();
        ll d = par.fs, u = par.sc;
        if (d > dist[u]) continue;
        if (u == t) return dist[t];
        for (int v : adj[u]){
            if (dist[u]+acum[v] < dist[v]){
                dist[v] = dist[u] + acum[v];
                pq.push(ii(dist[v],v));
            }
        }
    }
    return -1;
}

inline ll f(int pontos){
    if (pontos <= 0) return 0;
    if (~needed[pontos]) return needed[pontos];
    ll ans = INF;
    for (int i=1;i<=m;i++){
        ans = min(ans, f(pontos-dano[i])+mana[i]);
    }
    return needed[pontos] = ans;
}

int main(){_
    while ((cin>>m>>n>>g>>k) && (n||m||g||k)){
        adj  = vvi(n+1); acum = vi(n+1,0);
        for (int i=1;i<=m;i++){
            cin>>mana[i]>>dano[i];
        }
        for (int i=1;i<=g;i++){
            cin>>a>>b;
            adj[a].eb(b);
            adj[b].eb(a);
        }
        for (int i=MAX;i--;) needed[i]=-1;;
        for (int i=MAX;i--;){
            if (needed[i]==-1){
                needed[i] = f(i);
            }
        }
        while (k--){
            cin>>a>>b;
            acum[a] += needed[b];
        }
        cout<<djk(1,n)<<endl;
    }
    return 0;
}

