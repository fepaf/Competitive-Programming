// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Presente?!
// Nível: 5
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1425

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define INF 0x3f3f3f3f
#define eb emplace_back
#define ll long long
#define vl vector<ll>
#define vvl vector<vl>
#define vi vector<int>
#define vvi vector<vi>
#define TAM (n+1)
#define pulo(x) (((x)<<1)-1)
#define MOD 303700049

using namespace std;

vi vis,dist,proibidos[50];
int n,m;

void bfs(int s){
    queue<int> fila; fila.push(1);
    dist = vi(s+1,INF); dist[1]=2;

    while (!fila.empty()){
        int u=fila.front(); fila.pop();
        
        for (int sinal=1; sinal>-3; sinal-=2){
            int v = u+sinal*pulo(dist[u]);
            if (0<v && v<=s){
                
                    dist[v] = dist[u] + 1;
                    fila.push(v);
                
            }
        }
    }
    
    for (int i=1;i<=s;i++){
        if (dist[i]==INF){
            proibidos[s].eb(i);
            
        }
    }
 
}

int main(){_
    for (int i=1;i<50;i++){
        bfs(i);
    }
    

    while ((cin>>n>>m)&&(n|m)){
        if (n<50){
            if (binary_search(proibidos[n].begin(),proibidos[n].end(),m)){
                cout<<"Don't make fun of me!"<<endl;
            }
            else {
                cout<<"Let me try!"<<endl;
            }
        }
        else {
            cout<<"Let me try!"<<endl;
        }
    }
    return 0;
}

