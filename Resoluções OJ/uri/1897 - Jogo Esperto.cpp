// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jogo Esperto
// Nível: 4
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1897

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MOD int(10e9)+7
#define UNVISITED -1
#define VISITED 1
#define ii pair<int, int>
#define vi vector<int>
#define vii vector<ii>
#define vd vector<double>
#define qi queue<int>

using namespace std;

int n,m;

int main(){_
    while (cin>>n>>m){
        unordered_map<int,int> dist;
        qi fila;
        fila.push(n), dist[n]=(n==m ? 2 : 0);
        while (!fila.empty()){
            int u = fila.front(); fila.pop();
            if (u==m) break;
            if (dist.find(u*2)==dist.end()){
                dist[u*2] = dist[u]+1;
                fila.push(u*2);
            }
            if (dist.find(u*3)==dist.end()){
                dist[u*3] = dist[u]+1;
                fila.push(u*3);
            }
            if (dist.find(u/2)==dist.end()){
                dist[u/2] = dist[u]+1;
                fila.push(u/2);
            }
            if (dist.find(u/3)==dist.end()){
                dist[u/3] = dist[u]+1;
                fila.push(u/3);
            }
            if (dist.find(u+7)==dist.end()){
                dist[u+7] = dist[u]+1;
                fila.push(u+7);
            }
            if (dist.find(u-7)==dist.end()){
                dist[u-7] = dist[u]+1;
                fila.push(u-7);
            }
        }
        cout<<dist[m]<<endl;
    }
    return 0;
}

