// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Promoção
// Nível: 6
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1624

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,i,j,r[101][3001],v[101],t[101];

int main(){_
    while ((cin>>n)&&n){
        for (i=1;i<=n;i++) cin>>v[i]>>t[i];
        cin>>m;
        for (i=0;i<=m;i++) r[0][i]=0;
        for (i=1;i<=n;i++){
            r[i][0]=0;
            for (j=1;j<=m;j++){
                if (j>=t[i])
                    if (r[i-1][j-t[i]]+v[i]>r[i-1][j]) r[i][j]=r[i-1][j-t[i]]+v[i];
                    else r[i][j]=r[i-1][j];
                else r[i][j]=r[i-1][j];
            }
        }
        cout<<r[n][m]<<endl;
    }
    return 0;
}

