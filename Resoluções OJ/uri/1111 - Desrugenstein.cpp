// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Desrugenstein
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1111

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define maxn 11
#define INF 1123456
#define in(a,b,n) (a>-1 && a<n && b>-1 && b<n)
#define zerar(x) for (i=x;i--;) for (j=x;j--;) adj[i][j]=(i!=j ? INF : 0);
#define vert(a,b,n) a*n+b

using namespace std;

int n,i,j,k,adj[maxn*maxn][maxn*maxn],p,xi,yi,xf,yf,dir,a,b;
int di[]={1,-1,0,0},dj[]={0,0,-1,1};

int main(){_
    while ((cin>>n)&&n){
        zerar(n*n);
        for (i=n;i--;){
            for (j=0;j<n;j++){
                for (k=0;k<4;k++){
                    cin>>dir;
                    a=i+di[k];
                    b=j+dj[k];
                    if (in(a,b,n) && dir){
                        adj[vert(i,j,n)][vert(a,b,n)]=dir;
                    }
                }
            }
        }

        /*for (i=0;i<n*n;i++){
            for (j=0;j<n*n;j++){
                if (adj[i][j]!=INF)cout<<"  "<<adj[i][j]<<" ";
                else cout<<"INF ";
            }
            cout<<endl;
        }*/

        for (k=0;k<n*n;k++){
            for (i=0;i<n*n;i++){
                for (j=0;j<n*n;j++){
                    adj[i][j]=min(adj[i][j],adj[i][k]+adj[k][j]);
                }
            }
        }

        cin>>p;

        while (p--){
            cin>>xi>>yi>>xf>>yf;
            if (adj[vert(yi,xi,n)][vert(yf,xf,n)]!=INF) cout<<adj[vert(yi,xi,n)][vert(yf,xf,n)]<<endl;
            else cout<<"Impossible"<<endl;
        }
        cout<<endl;
    }

    return 0;
}
