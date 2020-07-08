// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Par ou Ímpar
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2677

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<10)
#define INF 0x3f3f3f3f
#define nt(x) !((x)&1)

using namespace std;

int memo[MAX][MAX],n,a[MAX];

int f(int i, int j){
    if (i==j) return nt(a[i]);
    if (i+1==j) return (nt(a[i])||nt(a[j]));
    if (memo[i][j]!=-1) return memo[i][j];
    return memo[i][j] = max(nt(a[i])+min(f(i+2,j), f(i+1,j-1)), nt(a[j]) + min(f(i+1,j-1),f(i,j-2)));
}

int main(){_
    while ((cin>>n)&&n){
        for (int i=0;i<(n<<1);i++){
            cin>>a[i];
        }
        memset(memo,-1,sizeof(memo));
        cout<<f(0,(n<<1)-1)<<endl;
    }
    return 0;
}

