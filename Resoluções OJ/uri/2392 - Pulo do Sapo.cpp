// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pulo do Sapo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2392

#include <stdio.h>
 
int ped[100];
 
main(){
	int n,m,i,j,p,d;
	
	scanf("%i %i",&n,&m);
	
	for(j=0;j<m;j++){
		scanf("%i %i",&p,&d);	
		
		for (i=((p-1)%d);i<n;i+=d){
			if (!ped[i]) ped[i]=1;
		}
	}
	
	for (i=0;i<n;i++){
		printf("%i\n",ped[i]);
	}	
	
	return 0;
}
 
