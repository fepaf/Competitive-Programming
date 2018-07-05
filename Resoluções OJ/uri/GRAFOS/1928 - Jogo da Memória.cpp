// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jogo da Memória
// Nível: 5
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1928

/*Algoritmo pra Menor Ancestral Comum usando RMQ([indice do menor elemento de um subvetor)*/
#include<bits/stdc++.h>
#define maxv 50002
#define maxm 2*maxv
#define inf 1000000001

using namespace std;

int id[maxm],disc[maxv],deep[maxm],mat[maxm][17],n,a,b,u,v,resp,x,i,m,mac;
vector < pair<int,int> > adj[maxv];
vector <int> c[maxv];

void dfs(int u,int d,int pai){
	static int time=-1;
	int i,v,t;
	++time;
	id[time]=u;
	deep[time]=d;
	if (disc[u]==-1) disc[u]=time;
	t=adj[u].size();
	for (i=0;i<t;i++){
		v=adj[u][i].first;
		if (v!=pai){
			dfs(v,d+1,u);
			++time;
			id[time]=u, deep[time]=d;
		} 
	}
}

void process(int M[maxm][17], int A[maxm], int N){
  int i, j;

//initialize M for the intervals with length 1
  for (i = 0; i < N; i++)
      M[i][0] = i;
//compute values from smaller to bigger intervals
  for (j = 1; 1 << j <= N; j++)
      for (i = 0; i + (1 << j) - 1 < N; i++)
          if (A[M[i][j - 1]] < A[M[i + (1 << (j - 1))][j - 1]])
              M[i][j] = M[i][j - 1];
          else
              M[i][j] = M[i + (1 << (j - 1))][j - 1];
}  

int rmq(int i,int j,int a[maxm]){
	int k=(log(j-i+1)/log(2));
	return a[mat[i][k]]<a[mat[j-(1<<k)+1][k]] ? mat[i][k]:mat[j-(1<<k)+1][k];
}

main (){
	ios_base::sync_with_stdio(false);
	cin>>n;
	m=2*n-1;
	for (i=0;i<n;i++){
		cin>>x;
		c[x-1].push_back(i);
		disc[i]=-1;
	}
	for (i=n-1;i--;){
		cin>>a>>b;
		a-- , b--;
		adj[a].push_back(make_pair(b,1));
		adj[b].push_back(make_pair(a,1));
	}
	dfs(0,0,-1);
	process(mat,deep,m);
//	cout<<endl;
	for (i=0;i<n/2;i++){
		v=c[i][0], u=c[i][1];
		if (disc[v]<disc[u]) u^=v, v^=u, u^=v;
//		cout<<u<<":"<<v<<" "<<id[rmq(disc[u],disc[v],deep)]<<endl;
		mac=id[rmq(disc[u],disc[v],deep)];
		resp+=(deep[disc[u]]+deep[disc[v]]-2*deep[disc[mac]]);
	}
	cout<<resp<<endl;
	return 0;
}

