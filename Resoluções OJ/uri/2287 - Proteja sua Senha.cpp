// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Proteja sua Senha
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2287

#include<stdio.h>
#include<string.h>
 
int freq[6][10],bot[5][2];
 
int main(){
	int n,i,j,t=1;
	char b;
	
	while (scanf("%i",&n)==1 && n){
		memset(freq,0,sizeof(freq));
		
		for (j=0;j<n;j++){
			for (i=0;i<5;i++){scanf("%i %i",&bot[i][0],&bot[i][1]);}
			
			for (i=0;i<6;i++){
				scanf(" %c",&b);
				freq[i][bot[b-'A'][0]]++;
				freq[i][bot[b-'A'][1]]++;
			}
		}
		printf("Teste %i\n",t++);
		for (i=0;i<6;i++){
			for (j=0;j<10;j++){
				if (freq[i][j]==n){
					printf("%i ",j);
					break;
				}
			}
		}
		printf("\n\n");
	}
	
	return 0;
}
 
