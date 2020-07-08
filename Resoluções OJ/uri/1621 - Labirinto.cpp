// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Labirinto
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1621

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);
#define maxn 502
#define maxm 502
#define branco 0
#define cinza 1
#define preto -1

using namespace std;

int n,m,lab[maxn][maxm],dist[maxn*maxm],i,j,di[]={-1,0,1,0},dj[]={0,1,0,-1},start;

int pos(int i, int j, int m){
	return i*m+j;
}

int m_i(int x, int y){
	return x/y;
}

int m_j(int x, int y){
	return x%y;
}

int dfs(int s){
	int i,j,k,pilha[maxn*maxm],cor[maxn*maxm],tam=0,v,u,maior,melhor;
	
	for (i=1;i<=n;i++) for (j=1;j<=m;j++) cor[pos(i,j,m+2)]=branco;
	
	pilha[tam++]=melhor=s;
	dist[s]=maior=0;
	cor[s]=cinza;
	
	while (tam){
		v=pilha[--tam];
		//cout<<v<<endl;
		if (dist[v]>maior){
			maior=dist[v];
			melhor=v;
		}
		
		i=m_i(v,m+2);
		j=m_j(v,m+2);
		
		for (k=4;k--;){
			u=pos(i+di[k],j+dj[k],m+2);
			if (lab[i+di[k]][j+dj[k]]==1 && cor[u]==branco){
				pilha[tam++]=u;
				dist[u]=dist[v]+1;
				cor[u]=cinza;
			}
		}
		cor[v]=preto;
	}
	
	return melhor;	
}

string s;

int main(){_
	while ((cin>>n>>m) && (n||m)){
		getline(cin,s);
		
		for (i=0;i<=n+1;i++) lab[i][0]=lab[i][n+1]=0;
		for (i=0;i<=m+1;i++) lab[0][i]=lab[m+1][i]=0;
		
		for (i=1;i<=n;i++){
			getline(cin,s);
			for (j=1;j<=m;j++){
				lab[i][j]=(s[j-1]=='.'?1:-1);
				start=(s[j-1]=='.'?pos(i,j,m+2):start);
			}
		}
		cout<<dist[dfs(dfs(start))]<<endl;
	}
	return 0;
}
