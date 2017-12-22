// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: PãodeQuejoSweeper
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2552

#include<bits/stdc++.h>
#define MAX 102
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int tab[MAX][MAX], ans, n,m,d[]={-1,0,1,0};

int main(){_
    while (cin>>n>>m){
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                cin>>tab[i][j];
            }
        }
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                ans=0;
                for (int k=4;k--;){
                    ans+=tab[i+d[3-k]][j+d[k]];
                }
                cout<<(tab[i][j] ? 9 : ans);
            }
            cout<<endl;
        }
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                tab[i][j]=0;
            }
        }
    }
    return 0;
}

