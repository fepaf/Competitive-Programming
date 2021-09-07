#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 123
#define INF 1000000123
#define zera(n) for (i=0;i<n;i++) for (j=0;j<n;j++) adj[i][j]=(i==j? 0 : INF);

using namespace std;

int n,m,i,j,k,h,t,u,v,adj[MAXN][MAXN];

int main(){_
    while ((cin>>n>>m)&&(n||m)){
        zera(n);
        while (m--){
            cin>>i>>j>>h;
            i--,j--;
            adj[i][j]=adj[j][i]=h;
        }

        for (k=0;k<n;k++) for (i=0;i<n;i++) for (j=0;j<n;j++) adj[i][j]=min(adj[i][j],max(adj[i][k],adj[k][j]));

        for (k=0;k<n;k++) adj[k][k]=0;

        cin>>k;
        
        while (k--){
            cin>>i>>j;
            i--,j--;
            cout<<adj[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
