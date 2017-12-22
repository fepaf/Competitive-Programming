#include<bits/stdc++.h>
#define _ ios_base:::sync_with_stdio(0);
#define MAX (1<<9)
#define INF 0x3f3f3f3f

using namespace std;

int n,e,x,y,h,o,d,adj[MAX][MAX],fecho[MAX][MAX];

int main(){_
    while ((cin>>n>>e)&&(n||e)){

        for (int i=n+1;i--;){
            for (int j=n+1;j--;){
                adj[i][j] = (i!=j)*INF;
                fecho[i][j] = 0;
            }
        }

        while (e--){
            cin>>x>>y>>h;
            adj[x-1][y-1] = h;
            fecho[x-1][y-1] = 1;
        }

        for (int k=0; k<n; k++){
            for (int i=0; i<n; i++){
                for (int j=0; j<n; j++){
                    fecho[i][j] &= (fecho[i][k]|fecho[k][j]);
                }
            }
        }

        for (int i=0; i<n; i++){
            for (int j=0; j<n; j++){
                adj[i][j] *= fecho[i][j];
            }
        }
    }
    return 0;
}
