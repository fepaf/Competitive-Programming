// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Qual a Sede?
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2118

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second

using namespace std;

struct st{
    int p,m,t,id;
};

st desempate(st a, st b){
    if (a.m != b.m) return a.m > b.m ? a : b;
    return a.t > b.t ? a : b;
}

vector <st> best;
vvi adj;
vi dist;
int l,s,q,a,p,m,t,x,y;

int main(){_
    cin>>l>>s>>q>>a;
    best = vector<st>(l+1); adj = vvi(l+1);
    for (int i=1;i<=s;i++){
        cin>>p>>m>>t;
        if (!best[p].id){
            // cout<<"id "<<p<<" "<<best[p].id<<endl;
            best[p] = st{p,m,t,i} ;
        }
        else {
            best[p] = desempate(best[p],st{p,m,t,i});
        }

    }
    while (a--){
        cin>>x>>y;
        adj[x].eb(y);
        adj[y].eb(x);
    }

    queue<int> fila; dist = vi(l+1, INF);
    for (int u=1; u<=l; u++){
        if (best[u].id){
            fila.push(u);
            dist[u] = 0;
        }
    }

    while (!fila.empty()){
        int u = fila.front(); fila.pop();
        // cout<<"bfs in "<<u<<endl;
        for (int v : adj[u]){
            if (dist[v]==INF){
                dist[v] = dist[u] + 1;
                best[v] = best[u];
                fila.push(v);
            }
            else if (dist[u]+1 == dist[v]){
                best[v] = desempate(best[u],best[v]);
            }
        }
    }

    while (q--){
        cin>>x;
        if (best[x].id){
            cout<<best[x].id<<endl;
        }
        else {
            cout<<"Noic"<<endl;
        }
    }
    return 0;
}

