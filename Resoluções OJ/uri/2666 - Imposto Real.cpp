// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Imposto Real
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2666

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 10123
#define INF 0x3f3f3f3f
#define ii pair<ll,ll>
#define vi vector<int>
#define vvi vector<vi>
#define vii vector<ii>
#define vvii vector<vii>
#define eb emplace_back
#define fs first
#define sc second
#define ll long long

using namespace std;

int n,c,u,v,w,e[MAX];
ll ans;
vvii adj;
vi vis;

void dfs(int u){
    vis[u]=1;
    for (ii vw : adj[u]){
        int v = vw.fs, w = vw.sc;
        if (!vis[v]){
            dfs(v);
            ans += w*2LL*((e[v]+c-1)/c);
            e[u]+=e[v];
        }
    }
}



int main(){_
    cin>>n>>c;
    adj = vvii(n+1), vis = vi(n+1,0);
    for (int i=1;i<=n;i++){
        cin>>e[i];
    }
    for (int i=n-1;i--;){
        cin>>u>>v>>w;
        adj[u].eb(v,w);
        adj[v].eb(u,w);
    }
    dfs(1);
    cout<<ans<<endl;
    return 0;
}

