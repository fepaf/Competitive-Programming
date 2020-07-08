// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Guildas
// Nível: 5
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1527

#include<stdio.h>
#define maxv 100000
 
int pai[maxv],tam[maxv],p[maxv];
 
int id(int n){
    if (n!=pai[n]) pai[n]=id(pai[n]);
    return pai[n];
}
 
void join(int u, int v){
    int v1=id(u);
    int v2=id(v);
     
    if (tam[v1]<tam[v2]){
        v1=v1+v2;
        v2=v1-v2;
        v1=v1-v2;
    }
     
    p[v1]+=p[v2];
    tam[v1]+=tam[v2];
    pai[v2]=v1;
}
 
int win(int a,int b){
    int d,x,y;
    x=id(a);
    y=id(b);
    d=p[x]-p[y];
    return (d != 0? (d>0?x:y) : id(0)+1);
}
 
int main(){
    int q,a,b,n,m,r,i;
     
    while (scanf("%i %i",&n,&m) && (n||m)){
        for (i=0;i<n;i++){
            scanf("%i",&p[i]);
            pai[i]=i;
            tam[i]=1;
        }
        r=0;
        while (m--){
            scanf("%i %i %i",&q,&a,&b);
            a--, b--;
            if (q%2) join(a,b);
            else if (id(0)==win(a,b)) r++;
        }
        printf("%i\n",r);
    }
     
    return 0;
}
