// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Contando Radares
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2599

#include<bits/stdc++.h>
#define MAX 1<<15
#define MOD 1000000007
#define int long long
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int c,n,m,memo[MAX],r[1<<10];

int solve(int n){
    if (n<=0) return 1;
    if (memo[n]!=-1) return memo[n];
    memo[n]=0;
    for (int i=m;i--;){
        memo[n]+=solve(n-r[i]);
    }
    memo[n]%=MOD;
    return memo[n];
}

signed main(){_
    cin>>c;
    while (c--){
        cin>>n>>m;
        for (int i=m;i--;){
            cin>>r[i];
        }
        for (int i=n+1;i--;) memo[i]=-1;
        cout<<solve(n)<<endl;
    }
    return 0;
}

