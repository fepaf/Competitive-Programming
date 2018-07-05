// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Passeio em FdI
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2553

#include<bits/stdc++.h>
#define MAX (1<<6)
#define INF 0x3f3f3f3f
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,v[MAX],a[MAX],memo[41][822][822],verde,amarelo;

int solve(int ind, int green, int yellow){
    if (ind==n) return 0;
    if (memo[ind][green][yellow]!=-1) return memo[ind][green][yellow];
    int ans=solve(ind+1,green,yellow);
    if (green+v[ind]>=0 && yellow+a[ind]>=0) ans= max(ans,solve(ind+1,green+v[ind],yellow+a[ind])+1);
    return memo[ind][green][yellow]=ans;
}

int main(){_
    while (cin>>n>>verde>>amarelo){
        for (int i=0;i<n;i++){
            cin>>v[i]>>a[i];
        }
        for (int i=n+1;i--;)for (int j=822;j--;)for (int k=822;k--;) memo[i][j][k]=-1;
        cout<<solve(0,verde,amarelo)<<endl;
    }
    return 0;
}

