// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Cash Roial
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2595

#include<bits/stdc++.h>
#define MAX 1<<10
#define vi vector <int>
#define vvi vector <vi>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,p,x,y,c;
char ch;
vvi mat,ans;

int main(){_
    cin>>c;
    while (c--){
        cin>>n>>m>>p;
        cin.ignore();
        mat = vvi(n+5,vi(m+5,0)); ans = vvi(n+5,vi(m+5,0));
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                cin>>ch;
                mat[i][j]=(ch=='T');
            }
        }
        for (int i=1;i<=n;i++){
            for (int j=1;j<=m;j++){
                for (int di=-1;di<=1;di++){
                    for (int dj=-1;dj<=1;dj++){
                        if (!(di||dj)) continue;
                        ans[i][j]+=mat[i+di][j+dj];
                    }
                }
            }
        }
        while (p--){
            cin>>x>>y;
            cout<<(ans[x][y]<5 ? "GG IZI" : "GRRR")<<endl;
        }
    }
    return 0;
}

