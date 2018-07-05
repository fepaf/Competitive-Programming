// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Rerisson e o Churrasco
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1923

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define MAXN 1009

using namespace std;

map<string, int> vert;
set<string> ans;
queue<int> fila;
vector<int> adj[MAXN],dist;
vector<string> nome;
string s,t;
int g,n,ind,u,v;

int main(){_
    while (cin>>n>>g){
        ind=1;
        nome.assign(1,".");
        for (int i=n;i--;){
            cin>>s>>t;
            if (vert[s]) u=vert[s];
            else {
                u=vert[s]=(ind++);
                nome.push_back(s);
            }
            if (vert[t]) v=vert[t];
            else {
                v=vert[t]=(ind++);
                nome.push_back(t);
            }
            adj[u].push_back(v);adj[v].push_back(u);
        }
        dist.assign(nome.size()+1,-1);
        fila.push(vert["Rerisson"]), dist[vert["Rerisson"]]=0;
        while (!fila.empty()){
            int u=fila.front(); fila.pop();
            if (dist[u]<=g && dist[u]) ans.insert(nome[u]);
            for (int i=adj[u].size();i--;){
                int v=adj[u][i];
                if (dist[v]==-1){
                    dist[v]=dist[u]+1;
                    fila.push(v);
                }
            }
        }
        cout<<ans.size()<<endl;
        for (set<string>::iterator it=ans.begin(); it!=ans.end(); it++) cout<<*it<<endl;
        for (int i=nome.size();i--;) adj[i].clear();
        ans.clear(),dist.clear(),nome.clear(),vert.clear();

    }
    return 0;
}

