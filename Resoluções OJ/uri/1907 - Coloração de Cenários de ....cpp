// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Coloração de Cenários de ...
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1907

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'
#define MAXN 1<<10
#define VISITED 1
#define UNVISITED 0

using namespace std;

int vis[MAXN+2][MAXN+2],i,j,n,m,ans,d[]={0,1,0,-1};
char cen[MAXN+2][MAXN+2];

void ff(int i,int j){
        if (!(i>-1 && i<n && j>-1 && j<m) || vis[i][j] || cen[i][j]=='o') return;
        vis[i][j]=VISITED;
        for (int k=4;k--;) ff(i+d[3-k],j+d[k]);
}


int main(){_
	cin>>n>>m;
	for (int i=0;i<n;i++){
               	for (int j=0;j<m;j++){
                        cin>>cen[i][j];
                        vis[i][j]=UNVISITED;
                }
        }
	for (int i=0;i<n;i++){
               	for (int j=0;j<m;j++){
                     if (vis[i][j]==UNVISITED && cen[i][j]=='.'){
                        ans++;
                        ff(i,j);
                     }
                }
	}
        cout<<ans<<endl;
	return 0;
}
