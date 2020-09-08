// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: 106 Milhas Para Chicago
// Nível: 4
// Categoria: GRAFOS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1655

#include <stdio.h>
#define V 100
#define inf 200
#define max(a,b) (a)>(b) ? (a):(b)

int main(){
	int n,m,a,b,i,j,k;
	double prob[V][V],p,r;
	
	while (scanf("%i",&n) && n){
		scanf("%i",&m);
		
		for (i=n;i--;){
			for (j=n;j--;) prob[i][j]=0.0;
			prob[i][i]=1.0;
		}
		
		while (m--){
			scanf("%i %i %lf",&a,&b,&p);
			a-- , b--;
			p*=0.01;
			prob[a][b]=prob[b][a]=p;
		}
		
		for (k=0;k<n;k++){
			for (i=0;i<n;i++){
				for (j=0;j<n;j++){
					prob[i][j]=max(prob[i][j],prob[i][k]*prob[k][j]);
				}
			}	
		}
		
		printf("%.6lf percent\n",100*prob[0][n-1]);
	}
	
	return 0;
}
