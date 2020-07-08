// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Lobo Mau
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2317

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 252

using namespace std;

int r,c,lobos,ovel,tab[MAXN][MAXN],l[MAXN*MAXN],o[MAXN*MAXN],d[]={-1,0,1,0},pasto,i,j;
char farm[MAXN][MAXN];

void ff(int i, int j, int p){
	if (i<1 || i>r || j<1 || j>c) return;
	if (tab[i][j] || farm[i][j]=='#') return;
	tab[i][j]=p;
	o[p]+=(farm[i][j]=='k');
	l[p]+=(farm[i][j]=='v');	
	for (int k=4;k--;) ff(i+d[k],j+d[3-k],p);
}

int main(){_
	while (cin>>r>>c){
		for (i=1;i<=r;i++) for (j=1;j<=c;j++) cin>>farm[i][j];
		
		for (i=1;i<=r;i++) for (j=1;j<=c;j++){
				if (farm[i][j]!='#' && !tab[i][j]){
					ff(i,j,++pasto);
					lobos+=(l[pasto]>=o[pasto])*l[pasto];
					ovel+=(o[pasto]>l[pasto])*o[pasto];
				}
		}
		cout<<ovel<<" "<<lobos<<endl;
	}
	return 0;
}
