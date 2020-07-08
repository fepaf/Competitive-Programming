// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Maçãs
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1517

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<10)
#define INF 0x3f3f3f3f

using namespace std;

int n,m,k,x,y,t,mat[25][25],maca[25][25][MAX<<1],memo[25][25][MAX<<1];

int f(int x, int y, int t){
    if (t==2*k+1) return 0;

    if (x<1 || x>n || y<1 || y>m) return 0;

    if (memo[x][y][t]!=-1) return memo[x][y][t];

    int ans=-INF;
    for (int dx=-1;dx<=1; dx++){
        for (int dy=-1;dy<=1; dy++){
            ans=max(ans,f(x+dx,y+dy,t+1)+maca[x][y][t]);
        }
    }
    return memo[x][y][t]=ans;
}

int main(){_
    while (cin>>n>>m>>k && (n+m+k)){
        for (int i=0;i<=n;i++) for (int j=0;j<=m;j++) for (int l=0;l<=2*k;l++){
            maca[i][j][l]=0;memo[i][j][l]=-1;
        }

        for (int i=0;i<k;i++){
            cin>>x>>y>>t;
            maca[x][y][t]=1;
        }
        cin>>x>>y;

        cout<<f(x,y,0)<<endl;
    }
    return 0;
}

