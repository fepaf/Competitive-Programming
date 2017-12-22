// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Painel de Posições
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1375

#include<stdio.h>
#include<string.h>

int pos[1000];

int main(){
	int n,v,c,p,i,ok;
	while (scanf("%i",&n)==1 && n){
		memset(pos,0,sizeof(pos));
		ok=1;
		for (i=0;i<n;i++){
			scanf("%i %i",&c,&p);
			if ((0<=i+p) && (i+p<n)){
				if (!pos[i+p]) pos[i+p]=c;
				else ok=0;
			}
			else {ok=0;}
		}
		if (ok){
			printf("%i",pos[0]);
			for (i=1;i<n;i++){printf(" %i",pos[i]);}
		}
		else {printf("-1");}
		printf("\n");
	}
	return 0;
}
