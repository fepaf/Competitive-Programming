// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Colônia de Formigas
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1135

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);
#define maxn 100001
#define maxm 2*maxn-1
#define logn 17
#define restart() for (i=n;i--;) adj[i].clear()
 
using namespace std;
 
typedef unsigned long long ll;
 
ll id[maxm],deep[maxm],disc[maxm],mat[maxm][logn],i,j,k,n,l,q,s,t,m,a,tempo,mac,resp;
vector < pair<ll,ll> > adj[maxn];
 
void dfs(ll u,ll d,ll pai){
    ll i,v,t,dist;
    ++tempo;
    id[tempo]=u;
    deep[tempo]=d;
    if (disc[u]==-1) disc[u]=tempo;
    t=adj[u].size();
    for (i=0;i<t;i++){
        v=adj[u][i].first;
        dist=adj[u][i].second;
        if (v!=pai){
            dfs(v,dist+d,u);
            ++tempo;
            id[tempo]=u, deep[tempo]=d;
        } 
    }
}
 
void process(ll M[maxm][logn], ll A[maxm], ll N){
  ll i, j;
  for (i = 0; i < N; i++)
      M[i][0] = i;
  for (j = 1; 1 << j <= N; j++)
      for (i = 0; i + (1 << j) - 1 < N; i++)
          if (A[M[i][j - 1]] < A[M[i + (1 << (j - 1))][j - 1]])
              M[i][j] = M[i][j - 1];
          else
              M[i][j] = M[i + (1 << (j - 1))][j - 1];
}  
  
ll rmq(ll i,ll j,ll a[maxm]){
    ll k=(log(j-i+1)/log(2));
    return a[mat[i][k]]<a[mat[j-(1<<k)+1][k]] ? mat[i][k]:mat[j-(1<<k)+1][k];
}
 
int main(){_
    while (scanf("%lli",&n) && n){
        m=2*n-1;
        disc[0]=-1;
        for (i=1;i<n;i++){
            disc[i]=-1;
            scanf("%lli %lli",&a,&l);
            adj[i].push_back(make_pair(a,l));
            adj[a].push_back(make_pair(i,l));
        }
        tempo=-1;
        dfs(0,0,-1);
        process(mat,deep,m);
        scanf("%lli",&q);
 
        while (q--){
            scanf("%lli %lli",&s,&t);
            if (disc[t]<disc[s]) s^=t, t^=s, s^=t;
            mac=id[rmq(disc[s],disc[t],deep)];
            printf("%lli%s",(deep[disc[s]]+deep[disc[t]]-2*deep[disc[mac]]),(q?" ":"\n"));
        }
        restart();
    }
    return 0;
}
