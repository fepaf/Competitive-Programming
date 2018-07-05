// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Demogorgon
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2532

#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define MAX 1<<10
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,p,m[MAX],d[MAX],memo[MAX][MAX<<1],ans;

int solve(int ind, int hp){
    if (hp<1) return 0;
    if (ind==n) return INF;
    if (memo[ind][hp]!=-1) return memo[ind][hp];
    return memo[ind][hp]=min(solve(ind+1,hp),solve(ind+1,hp-d[ind])+m[ind]);
}


int main(){_
    while (cin>>n>>p){
        for (int i=n;i--;){
            cin>>d[i]>>m[i];
        }
        for (int i=n+1;i--;) for (int j=p+1;j--;) memo[i][j]=-1;
        ans=solve(0,p);
        cout<<(ans!=INF ? ans : -1)<<endl;
    }
    return 0;
}

