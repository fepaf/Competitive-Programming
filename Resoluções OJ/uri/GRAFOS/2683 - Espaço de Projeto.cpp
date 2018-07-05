// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Espaço de Projeto
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2683

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1000123

using namespace std;

struct aresta{
        int u,v,w;
};

int pai[MAX],n,u,v,w,big,small;
aresta a[MAX];

bool cmpbig(aresta a, aresta b){
    return a.w>b.w;
}

bool cmpsmall(aresta a, aresta b){
    return a.w<b.w;
}


void init(int n){
    for (int i=0; i<=n; i++){
        pai[i]=i;
    }
}

int id(int x){ return (pai[x]!=x ? pai[x]=id(pai[x]) : pai[x]);}

void join(int u, int v){
    pai[id(v)]=id(u);
}

int main(){_
    scanf("%i",&n);
    init((1<<10));
    for (int i=n;i--;){
        scanf("%i %i %i",&a[i].u,&a[i].v,&a[i].w);
    }
    sort(a,a+n,cmpbig);
    for (int i=0; i<n; i++){
        u=a[i].u , v = a[i].v , w =a[i].w;
        if (id(u)!=id(v)){
            join(u,v);
            small += w;
        }
    }
    init((1<<10));
    for (int i=n; i--;){
        u=a[i].u , v = a[i].v , w =a[i].w;
        if (id(u)!=id(v)){
            join(u,v);
            big += w;
        }
    }
    printf("%i\n%i\n",small,big);
    return 0;
}

