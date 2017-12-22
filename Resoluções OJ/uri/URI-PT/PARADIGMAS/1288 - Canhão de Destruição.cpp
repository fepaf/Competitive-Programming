// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Canhão de Destruição
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1288

#include<stdio.h>
#define maxn 50
#define maxk 100

int x[maxn+1],y[maxn+1],dst[maxn+1][maxk+1];

int main(){
		int t,k,r,i,j,n;
		scanf("%i",&t);
		
		while (t--){
			scanf("%i",&n);
			
			for (i=1;i<=n;i++){scanf("%i %i",&x[i],&y[i]);}
			
			scanf("%i %i",&k,&r);
			
			for (i=0;i<=k;i++) dst[0][i]=0;
			
			for (i=1;i<=n;i++){
				dst[i][0]=0;
				for (j=1;j<=k;j++){
					if (y[i]<=j){
						if (dst[i-1][j-y[i]]+x[i]>dst[i-1][j]) dst[i][j]=dst[i-1][j-y[i]]+x[i];
						else dst[i][j]=dst[i-1][j];
					}
					else dst[i][j]=dst[i-1][j];
				}
			}
			
			printf("%s\n",(dst[n][k]>=r? "Missao completada com sucesso":"Falha na missao"));
		}
		
		return 0;
}
