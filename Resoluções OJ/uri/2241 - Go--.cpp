// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Go--
// Nível: 5
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2241

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<9)
#define min(a,b,c) min(min((a),(b)),(c))

using namespace std;

int pd[3][MAX][MAX], tab[MAX][MAX],n,p,l,c,ans[3];

int main(){_
    cin>>n>>p;
    for (int k=1;k<=2;k++){
        for (int i=0;i<p;i++){
            cin>>l>>c;
            tab[l][c]=k;
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            pd[0][i][j]=(tab[i][j]==0);
            pd[1][i][j]=(tab[i][j]!=2);
            pd[2][i][j]=(tab[i][j]!=1);
        }
    }
    for (int k=0;k<=2;k++){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=n;j++){
                pd[k][i][j]*=(min(pd[k][i-1][j-1],pd[k][i-1][j],pd[k][i][j-1])+1);
                ans[k]+=pd[k][i][j];
            }
        }
    }
    cout<<ans[1]-ans[0]<<" "<<ans[2]-ans[0]<<endl;

    return 0;
}

