// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Garoto Ixpertinho
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2490

#include<bits/stdc++.h>
#define MAX 1000123
#define _ ios_base::sync_with_stdio(0);

using namespace std;

struct aresta{
    int u,v,flag;
    double w;
}a[MAX];

bool cmp(aresta a, aresta b){
    return a.w<b.w;
}

int pai[MAX], tam[MAX];

void init (int n){
    for (int i=0;i<=n;i++){
        pai[i]=i;
        tam[i]=1;
    }
}

int id(int n){return (pai[n]!=n ? pai[n]=id(pai[n]) : pai[n]);}

void join(int u,int v){
    u=id(u), v=id(v);
    if (u==v) return;
    pai[v]=u;
    tam[u]+=tam[v];
}

int q,c,cpo,u,v,lost;
double t,tmin;

int main(){_
    cout<<fixed<<setprecision(2);
    while ((cin>>q>>c>>t)&&(q||c||t)){
        init(q);
        for (int i=c;i--;){
            cin>>a[i].u>>a[i].v>>a[i].w;
            a[i].w += (a[i].w > t)*2;
            a[i].flag=(a[i].w > t);
        }
        sort(a,a+c,cmp);
        tmin=lost=0;
        cpo=q;
        for (int i=0; i<c && cpo>1; i++){
            u=id(a[i].u) , v=id(a[i].v);
            if (u!=v){
                join(u,v);
                tmin+=a[i].w;
                lost+=a[i].flag;
                --cpo;
            }
        }
        //cout<<tmin<<" "<<lost<<endl;
        printf("%.2lf %i\n",tmin,lost);
    }
    return 0;
}

