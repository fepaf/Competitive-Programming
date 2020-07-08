// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Roteadores
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1774

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN (1<<20)
#define MAXM (1<<15)

using namespace std;

/*algoritmo de Kruskal para o problema da floresta geradora mínima*/

struct Aresta{
    int u, v, w;
};

int n; // número de vértices
int m; // número de arestas
int u, v, w;
int pai[MAXN]; // Vetor de pais do union-find
Aresta arestas[MAXM];

int cmp(Aresta a, Aresta b){
    return a.w < b.w;
}

void init(int n){
    for (int i=0; i<=n; i++){
        pai[i] = i;
    }
}

int id(int x){
    return pai[x] == x ? pai[x] : pai[x] = id(pai[x]);
}

void join(int u, int v){
    pai[id(v)] = id(u);
}

int kruskal(){
    int ans = 0 , u , v, w;
    init(n);
    sort(arestas, arestas + m, cmp);
    for (auto aresta : arestas){
        u = aresta.u, v = aresta.v, w = aresta.w;
        if (id(u) != id(v)){
            join(u, v);
            ans += w;
        }
    }
    return ans;
}


int main(){_
    while (cin>>n>>m){
        for (int i=m; i--;){
            cin>>arestas[i].u>>arestas[i].v>>arestas[i].w;
        }
        cout<<kruskal()<<endl;
    }
    return 0;
}

