// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Casa de Rogério
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2002

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define INF (1LL<<50)-1
#define MAXN 1<<7

using namespace std;

typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll,ll> vll;
typedef vector<ll> vl;

ll n,m,q[MAXN][MAXN],dx[]={-1,0,1,0};
vl dist;

ll xut(ll n){return (n>>1LL)&1LL^(n&1LL?1LL:n);}
ll c(ll x, ll y){return xut(min(x,y)-1)^xut(max(x,y));}

ll pos(ll i, ll j){ return i*m+j;}
ll pi(ll p){return p/m;}
ll pj(ll p){return p%m;}

ll out(ll i, ll j){return i<0 || i>=n || j<0 || j>=m;}

ll dkt(ll s, ll t){
    priority_queue <ii, vector<ii>, greater<ii> > pq; pq.push(make_pair(0,s)); // atenção
    dist.assign((n*m)+1,INF); dist[s]=0;

    while (!pq.empty()){
            ii topo=pq.top(); pq.pop();
            ll d=topo.first,u=topo.second;

            if (d>dist[u]) continue;

            if (u==t) return dist[t];

            for (int i=4;i--;){
                if (out(pi(u)+dx[i],pj(u)+dx[3-i])) continue;// saporra nunca excutava
                ll v=pos(pi(u)+dx[i],pj(u)+dx[3-i]);
                ll w=c(q[pi(u)][pj(u)],q[pi(v)][pj(v)]);

                if (dist[u]+w<dist[v]){
                    dist[v]=dist[u]+w;
                    pq.push(make_pair(dist[v],v));
                }
            }
    }

    return dist[t];
}

int main(){_
    while (cin>>n>>m){
        for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin>>q[i][j];
        cout<<dkt(pos(0,0),pos(n-1,m-1))<<endl;
    }
    return 0;
}
