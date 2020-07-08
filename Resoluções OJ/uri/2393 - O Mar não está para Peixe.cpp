// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Mar não está para Peixe
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2393

#include<stdio.h>
#define MAX 100
int matriz[MAX][MAX], cont;
 
int main(){
	int n, i, j, xi, xf, yi, yf;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d %d",&xi,&xf,&yi,&yf);
		for(i = yi; i < yf; i++) for(j = xi; j < xf; j++) if(!matriz[i][j]) matriz[i][j] = 1, ++cont;
	}
	printf("%d\n",cont);
	return 0;
}
