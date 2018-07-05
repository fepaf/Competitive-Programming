// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Combate à Dengue
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2088

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 17
#define INF 1000000123

using namespace std;

int n,bitmask,i,j,x[MAXN],y[MAXN];
double dist[MAXN][MAXN],memo[MAXN][1<<MAXN];

double tsp(int id, int bitmask){
    double ans;

    if (bitmask==(1<<n)-1) return dist[id][0];

    if (memo[id][bitmask]!=-1) return memo[id][bitmask];

    ans=INF;
    for (int i=0;i<n;i++) if (!((1<<i)&bitmask)) ans=min(ans,dist[id][i]+tsp(i,bitmask | (1<<i)));

    return memo[id][bitmask]=ans;
}

int main(){_
    while ((scanf("%i",&n))&&n){
        ++n;
        for (int i=0;i<n;i++) scanf("%i %i",&x[i],&y[i]);

        for (int i=0;i<n;i++) for (int j=i;j<n;j++) dist[i][j]=dist[j][i]=hypot(x[i]-x[j],y[i]-y[j]);

        for (int i=0;i<n;i++) for (int j=0;j<(1<<n);j++) memo[i][j]=-1;

        printf("%.2lf\n",tsp(0,1));
    }
    return 0;
}

