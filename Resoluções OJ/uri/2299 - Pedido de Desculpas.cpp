// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pedido de Desculpas
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2299

#include <stdio.h>
#define maxf 50
#define maxc 1000
 
int tam[maxf+1],val[maxf+1],best[maxf+1][maxc+1];
 
main (){
	int c,f,t,i,j,ant;
	for(t=1;;t++){
		scanf("%i %i",&c,&f);
		
		if (!c && !f) break;
		
		
		for (i=1;i<=f;i++){
			scanf("%i %i",&tam[i],&val[i]);
		}
		
		
		for (j=1;j<=c;j++) best[0][i]=0;
		
		for (i=1;i<=f;i++){
			best[i][0]=0;
			for (j=1;j<=c;j++){
				if (j>=tam[i]){
					if (best[i-1][j-tam[i]]+val[i]>best[i-1][j]){
						best[i][j]=best[i-1][j-tam[i]]+val[i];
					}
					else {
						best[i][j]=best[i-1][j];
					}
				}
				else{
					best[i][j]=best[i-1][j];
				}
			}
		}
		
		printf("Teste %i\n%i\n\n",t,best[f][c]);
	}
	return 0;
} 
