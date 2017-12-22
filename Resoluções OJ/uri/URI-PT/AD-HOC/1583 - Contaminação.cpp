// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Contaminação
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1583

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define in(i,j,n,m) (i>-1 && i<n && j>-1 && j<m)
#define maxnm 52

using namespace std;

int n,m,i,j,mark[maxnm][maxnm];
char tank[maxnm][maxnm];

void ff(int a,int b,int n,int m){
    int di[]={-1,0,1,0},dj[]={0,1,0,-1},k;
    if (in(a,b,n,m) && !mark[a][b] && (tank[a][b]=='A' || tank[a][b]=='T')){
        mark[a][b]=1;
        tank[a][b]='T';
        for (k=4;k--;) ff(a+di[k],b+dj[k],n,m);
    }
    return;
}

int main(){_
    while ((cin>>n>>m)&&(n||m)){
        for (i=0;i<n;i++){
            for (j=0;j<m;j++){
                cin>>tank[i][j];
                mark[i][j]=0;
            }
        }
        for (i=0;i<n;i++){
            for (j=0;j<m;j++){
                if (tank[i][j]=='T') ff(i,j,n,m);
            }
        }
        for (i=0;i<n;i++){
            for (j=0;j<m;j++){
                cout<<tank[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}

