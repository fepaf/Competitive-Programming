// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: See World
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1955

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define vi vector<int>
#define vvi vector<vi>
#define eb emplace_back
#define fs first
#define sc second
#define SEMCOR -1
#define BLACK 1
#define WHITE 0

using namespace std;

vvi adj;
vi cor;
int n,u,v,w,ans;

int colore(int s){
    cor[s] = WHITE;
    queue<int> fila; fila.push(s);
    // cout<<"start "<<s+1<<endl;
    while (!fila.empty()){
        int u = fila.front(); fila.pop();
        // cout<<"  in "<<u+1<<endl;
        for (int v=n; v--;){
            if (adj[u][v]){
                if (cor[v]==SEMCOR){
                    cor[v] = (cor[u]^1);
                    fila.push(v);
                }
                else if (cor[v]==cor[u]){
                    // cout<<"falhou, "<<v<<" tem mesma cor que "<<u<<endl;
                    return 0;
                }
            }
        }
    }
    return 1;
}

int ehcolorivel(int n){
    cor = vi(n,SEMCOR);
    int ans=1;
    for (int u=n;u--;){
        if (cor[u]==SEMCOR){
            ans &= colore(u);
        }
    }
    return ans;
}

int main(){_
    while (cin>>n){
        adj = vvi(n,vi(n,0));
        for (int i=n; i--;){
            for (int j=n; j--;){
                cin>>adj[i][j];
                adj[i][j]^=1;
            }
        }
        cout<<(ehcolorivel(n) ? "Bazinga!" : "Fail!")<<endl;
    }
    return 0;
}

