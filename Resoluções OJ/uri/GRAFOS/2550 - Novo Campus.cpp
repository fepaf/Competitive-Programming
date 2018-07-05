// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Novo Campus
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2550

#include<bits/stdc++.h>
#define MAX 1000123
#define _ ios_base::sync_with_stdio(0);

using namespace std;

struct aresta{
    int u,v,w;
}a[MAX];

bool cmp(aresta a, aresta b){
    return a.w < b.w;
}

int pai[MAX],tam[MAX];

void init(int n){
    for (int i=0;i<=n;i++){
        pai[i]=i;
        tam[i]=1;
    }
}

int id(int x){
    return (pai[x]!=x ? pai[x]=id(pai[x]) : pai[x]);
}

void join(int u, int v){
    u=id(u) , v=id(v);
    if (u==v) return;
    if (tam[u]<tam[v]) swap(u,v);
    pai[v]=u;
    tam[u]+=tam[v];
}

int issame(int u, int v){
    return id(u)==id(v);
}

int n,m,cpo,mst;

int main(){_
    while (cin>>n>>m){
        init(n);
        for (int i=m;i--;){
            cin>>a[i].u>>a[i].v>>a[i].w;
        }
        sort(a,a+m,cmp);
        cpo=n, mst=0;
        for (int i=0;i<m && cpo>1;i++){
            if (issame(a[i].u,a[i].v)) continue;
            join(a[i].u,a[i].v);
            mst+=a[i].w;
            --cpo;
        }
        if (cpo!=1) cout<<"impossivel"<<endl;
        else cout<<mst<<endl;
    }
    return 0;
}

