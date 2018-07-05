// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Reunião
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2372

#include<stdio.h>
#include<string.h>
#define max 100
#define inf 0x3f3f3f3f
 
int dist[max][max];
 
main(){
	int n,m,u,v,w,i,j,k,mad,med;
	
	scanf("%i %i",&n,&m);
	
	memset(dist,0x3f,sizeof(dist));
	
	while (m--){
		scanf("%i %i %i",&u,&v,&w);
		if (w<dist[u][v]){
			dist[u][v]=w;
			dist[v][u]=w;
		}
	}
	
	for (k=0;k<n;k++)
		dist[k][k]=0;
	
	for (k=0;k<n;k++){
		for (i=0;i<n;i++){
			for (j=0;j<n;j++){
				if (dist[i][k]+dist[k][j]<dist[i][j])
					dist[i][j]=dist[i][k]+dist[k][j];
			}
		}
	}
	
	med=inf;
	
	for (i=0;i<n;i++){
		mad=0;
		for (j=0;j<n;j++){
			if (dist[i][j]>mad)
				mad=dist[i][j];	
		}
		if (mad<med)
			med=mad;
	}
	
	printf("%i\n",med);
	
	return 0;
}
 
