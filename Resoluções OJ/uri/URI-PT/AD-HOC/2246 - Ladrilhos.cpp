// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ladrilhos
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2246

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int h,l,mat[1<<8][1<<8],cor[1<<8][1<<8],d[]={-1,0,1,0},i,j,ans;

int ff(int i,int j,int c){
	int ans=1;
	if (i<0 || i>=h || j<0 || j>=l) return 0;
	if (cor[i][j]!=-1 || mat[i][j]!=c) return 0;
	cor[i][j]=c;
	for (int k=4;k--;) ans+=ff(i+d[k],j+d[3-k],c);
	return ans;
}

int main(){_
	while (cin>>h>>l){
		for (i=0;i<h;i++){
			for (j=0;j<l;j++){
				cin>>mat[i][j];
				cor[i][j]=-1;
			}
		}
		ans=40123;
		for (i=0;i<h;i++){
			for (j=0;j<l;j++){
				if (cor[i][j]==-1){
					ans=min(ans,ff(i,j,mat[i][j]));
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
