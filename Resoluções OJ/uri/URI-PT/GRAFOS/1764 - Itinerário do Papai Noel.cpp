// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Itinerário do Papai Noel
// Nível: 3
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1764

#include<iostream>
#include<cstdio>
#include<algorithm>
#define max 200000
 
using namespace std;
 
typedef struct aresta{
    int u,v,c;
}aresta;
 
int pai[max],tam[max];
aresta a[max];
 
int id(int n){
    if (n!=pai[n]) return pai[n]=id(pai[n]);
    else return pai[n];
}
 
void join(int u, int v){
    int v1=id(u);
    int v2=id(v);
    int aux;
     
    if (tam[v1]<tam[v2]){
        aux=v1;
        v1=v2;
        v2=aux;
    }
     
    tam[v1]+=tam[v2];
    pai[v2]=v1;
}
 
bool cmp(const aresta a,const aresta b){
    return a.c < b.c;
}
 
int main(){
    int m,n,min,i,j,k,x,y;
     
    while (scanf("%i %i",&m,&n)==2 && n && m){
        min=0;
         
        for (i=0;i<m;i++){
            pai[i]=i;
            tam[i]=1;
        }
         
        for (i=0;i<n;i++){
            scanf("%i %i %i",&a[i].u,&a[i].v,&a[i].c);
        }
         
        sort(a,a+n,cmp);
         
        for (i=0,k=1;i<n && k<m;i++){
            x=id(a[i].u);
            y=id(a[i].v);
            if (x!=y){
                join(x,y);
                k++;
                min+=a[i].c;            }
        }
         
        printf("%i\n",min);
    }
    return 0;
}
