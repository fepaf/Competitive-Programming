// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Balas de Morango
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2524

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<10)
#define INF 0x3f3f3f3f

using namespace std;

int n,m,b[MAX],memo[MAX][MAX];

int f(int ind, int resto){
    if (ind == m) return (resto!=0 ? -INF : 0);
    if (memo[ind][resto]!=-1) return memo[ind][resto];
    return memo[ind][resto]=max(f(ind+1,resto),f(ind+1,((resto-(b[ind]%n)+n)%n))+1);
}

int main(){
    while (cin>>n>>m){
        for (int i=0;i<m;i++){
            cin>>b[i];
            for (int j=0;j<=n;j++) memo[i][j]=-1;
        }
        cout<<f(0,0)<<endl;
    }
    return 0;
}

