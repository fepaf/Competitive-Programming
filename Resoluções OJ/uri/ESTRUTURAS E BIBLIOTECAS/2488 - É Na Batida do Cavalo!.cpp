// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: É Na Batida do Cavalo!
// Nível: 4
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2488

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define maxv 50002
#define maxm 2*maxv

using namespace std;

int mat[maxm][17],n,p,ans,xa,ya,xb,yb,i,m;
unordered_map <string,int> id;

void process(int M[maxm][17], double A[maxm], int N){
  int i, j;

  for (i = 0; i < N; i++) M[i][0] = i;
  for (j = 1; 1 << j <= N; j++){
      for (i = 0; i + (1 << j) - 1 < N; i++){
          if (A[M[i][j - 1]] > A[M[i + (1 << (j - 1))][j - 1]]) M[i][j] = M[i][j - 1];
          else M[i][j] = M[i + (1 << (j - 1))][j - 1];
      }
  }
}  

int rmq(int i,int j,double a[maxm]){
	int k=(log(j-i+1)/log(2));
	return a[mat[i][k]]>a[mat[j-(1<<k)+1][k]] ? mat[i][k]:mat[j-(1<<k)+1][k];
}



int ax,ay,x,y,rg=0;
double dist[maxm];
string id0,id1;

int main(){
	cin>>n>>p;

	cin>>ax>>ay;
	
	id[to_string(ax)+","+to_string(ay)]=rg++;
	for (i=0; i<n-1; i++){
		cin>>x>>y;
		id[to_string(x)+","+to_string(y)]=rg++;
		dist[i]=hypot(x-ax,y-ay);
		ax=x, ay=y;
	}
	process(mat,dist,n-1);
	while (p--){
		cin>>xa>>ya>>xb>>yb;	
		id0=to_string(xa)+","+to_string(ya);
		id1=to_string(xb)+","+to_string(yb);
		x=min(id[id0],id[id1]);
		y=max(id[id0],id[id1]);
		cout<<fixed<<setprecision(2)<<dist[rmq(x,y-1,dist)]<<endl;
	}
	
	return 0;
}

