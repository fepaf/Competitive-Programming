#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define VISITED 1
#define UNVISITED 0
#define PROIBIDO 'X'
#define MAXN 123
#define MAXM 123

using namespace std;

int di[]={-1,0,1,0},dj[]={0,1,0,-1},n,m,color,vis[MAXN][MAXM],cor[MAXN][MAXM];
char mat[MAXN][MAXM];

void ff(int i, int j){
	if (i<0 || i>=n || j<0 || j>=m) return;
	if (vis[i][j]==VISITED || mat[i][j]==PROIBIDO) return;
	
	vis[i][j]=VISITED;
	
	cor[i][j]=color;	
	
	for (int k=0;k<4;k++){
		ff(i+di[k],j+dj[k]);	
	}
}

int main(){_
	while (cin>>n>>m){
		color=1;
		
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				cin>>mat[i][j];
				vis[i][j]=UNVISITED;
			}		
		}	
		
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				if (vis[i][j]==UNVISITED && mat[i][j]!=PROIBIDO){
					ff(i,j);
					color++;				
				}
			}		
		}
		
		for (int i=0;i<n;i++){
			for (int j=0;j<m;j++){
				if (cor[i][j]) cout<<cor[i][j]<<" ";
				else cout<<"  ";
				cor[i][j]=0;
			}	
			cout<<endl;
		}		
		cout<<endl;
	}
	return 0;
}