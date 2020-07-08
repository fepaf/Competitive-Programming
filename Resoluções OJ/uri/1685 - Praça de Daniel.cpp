// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Praça de Daniel
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1685

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<10)
#define min(x,y,z) min(min((x),(y)),(z))

using namespace std;

int t,n,m,pd[MAX][MAX],ans,cnt;
char tab[MAX][MAX];

int main(){_
    cin>>t;
    while (t--){
        ans=cnt=0;
        cin>>n>>m;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                cin>>tab[i][j];
                pd[i][j]= (tab[i][j]== '.' ? min(pd[i][j-1],pd[i-1][j],pd[i-1][j-1])+1 : 0);
                ans=max(ans,pd[i][j]);
            }
        }
        cout<<"The side of the square is "<<ans<<" and the locations are:"<<endl;
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                if (pd[i][j]==ans){
                    cout<<(i-ans+1)<<' '<<(j-ans+1)<<endl;
                    cnt++;
                }
            }
        }
        cout<<cnt<<" in total."<<endl;
    }
    return 0;
}

