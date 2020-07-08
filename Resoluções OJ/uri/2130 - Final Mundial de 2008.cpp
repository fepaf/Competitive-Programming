// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Final Mundial de 2008
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2130

#include<iostream>
#include<cstdio>
#include<cstring>
#define maxn 100
#define maxc maxn*maxn
#define inf 999999// infinito eh um valor pra qual todo valor testado na execução será menor que ele
 
using namespace std;
 
int dist[maxn][maxn],est[maxn][maxn][maxn+1],r[maxc];
 
int main(){
	int n,m,u,v,w,c,o,d,t,i,j,k,inst=1;
	
	while (scanf("%i",&n)!=EOF){
		
		scanf("%i",&m);
		
		for (i=0;i<n;i++){//a distancia entre qualquer duas cidades eh infinita antes de começar
			for (j=0;j<n;j++){
				dist[i][j]=est[i][j][0]=(i==j ? 0:inf);
			}
		}
		
		while (m--){
			scanf("%i %i %i",&u,&v,&w);
			u-- , v--;// porque os vetores e matrizes começam do 0e não do 1 como a questao pede
			if (w<dist[u][v]){dist[u][v]=est[u][v][0]=w;}// de todos os voos diretos ente U e V obviamente só me interessam o de menor custo
		}
		
		for (k=0;k<n;k++){// trecho do floyd-warshall
			for (i=0;i<n;i++){
				for (j=0;j<n;j++){
					if (dist[i][k]+dist[k][j]<dist[i][j]) dist[i][j]=dist[i][k]+dist[k][j];
					est[i][j][k+1]=dist[i][j];
				}
			}
		}
		
		scanf("%i",&c);
		printf("Instancia %i\n",inst++);
		for (i=0;i<c;i++){
			scanf("%i %i %i",&o,&d,&t);
			o-- , d--;
			printf("%i\n",(est[o][d][t]==inf ? -1:est[o][d][t]));
		}
		
		printf("\n");
	}
	
	return 0;
}
