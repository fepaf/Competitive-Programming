// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Mesa da Sra. Montagny!
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2131

    #include<bits/stdc++.h>
    #define _ ios_base::sync_with_stdio(0);
    #define UNVISITED -1
    #define BLUE 0
    #define RED 1
    #define MAXN 11234
     
    using namespace std;
     
    typedef pair<int,int> ii;
    typedef vector<ii> vii;
    typedef vector<int> vi;
     
    vii adj[MAXN];
    vi num;
    int n,m,u,v,w,t;
     
    bool ComponenteBicolorivel(int s){//atenÃ§Ã£o: detecta se UM compenente conexo eh bicolorivel! se o grafo tiver mais de um, deve-se chama-la mais vezes
        queue <int> fila;
     
        num[s]=BLUE;
     
        fila.push(s);
        while (!fila.empty()){
            int u=fila.front(); fila.pop();
     
            for (int i=0;i<adj[u].size();i++){
                int v=adj[u][i].first;
     
                if (num[v]==UNVISITED){
                    num[v]=1-num[u];// se num[u] for BLUE , num[v] se torna RED; Se num[u] for RED, num[v] se torna BLUE
                    fila.push(v);
                }
                else if (num[v]==num[u]) return false;
            }
        }
     
        return true;
    }
     
    bool GrafoBicolorivel(){
        num.assign(n+1,UNVISITED);
     
        for (int i=1;i<=n;i++) if (num[i]==UNVISITED && !ComponenteBicolorivel(i)) return false;
     
        return true;
    }
     
    int main(){_
     
        while ((cin>>n>>m)){
     
            while (m--){
                cin>>u>>v;
                w=1; // nÃ£o ponderado
                adj[u].push_back(make_pair(v,1));
                adj[v].push_back(make_pair(u,1));
            }
     
            cout<<"Instancia "<<++t<<(GrafoBicolorivel() ? "\nsim" : "\nnao")<<endl<<endl;
     
            for (int i=1;i<=n;i++) adj[i].clear();
            num.clear();
        }
        return 0;
    }
     
