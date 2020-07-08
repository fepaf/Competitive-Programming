// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Mapa
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2468

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

using namespace std;

ll n,m,u,v,w,ans,x;
vvi adj;
vi vis;

int dfs(int u){
    int ans=1;
    vis[u]=VISITED;
    for (auto v : adj[u]){
        if (vis[v]==UNVISITED){
            ans+=dfs(v);
        }
    }
    return ans;
}

int main(){_

    while (cin>>n){
        adj = vvi(n), vis = vi(n,UNVISITED);
        for (int i=n-1;i--;){
            cin>>u>>v>>w;
            u--, v--;
            if (!w){
                adj[u].pb(v), adj[v].pb(u);
            }
        }
        ans=(n*(n-1))/2;
        for (int i=n;i--;){
            if (vis[i]==UNVISITED){
                x=dfs(i);
                ans-=(x*(x-1))/2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

