// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Acácias
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1956

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define maxn 1000123

using namespace std;

struct aresta{
    long long u,v,c;
};

aresta pont[maxn];
long long n,i,j,c,k,tam[maxn],pai[maxn],vis[maxn],u,v,t,f,r;

bool cmp (aresta a1, aresta a2){
    return a1.c<a2.c;
}

long long id(long long n){
    if (n!=pai[n]) return pai[n]=id(pai[n]);
    else return pai[n];
}

void join(long long u,long long v){
    vis[u]=vis[v]=1;

    if (tam[u]<tam[v]){
        u=u^v;
        v=u^v;
        u=u^v;
    }

    tam[u]+=tam[v];
    pai[v]=u;
}

main(){_
    cin>>n;
    f=n;
    for (i=0;i<=n;i++) pai[i]=i, tam[i]=1;
    for (i=1;i<n;i++){
        cin>>k;
        while (k--){
            cin>>j>>c;
            pont[t].u=i;
            pont[t].v=j;
            pont[t++].c=c;
        }
    }

    sort(pont,pont+t,cmp);

    for (i=0;i<t;i++){
        u=id(pont[i].u) , v=id(pont[i].v);
        if (u!=v){
            join(u,v);
            r+=pont[i].c;
            --f;
        }
    }

    cout<<f<<" "<<r<<endl;

    return 0;
}

