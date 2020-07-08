// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Grid de Largada
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1228

#include<stdio.h>

int main(){
	int n,x,beg[24],end[24],r;
	
	while (scanf("%i",&n)!=EOF){
		for (int i=0;i<n;i++){
			scanf("%i",&x);
			beg[x-1]=i;
		}
		
		for (int i=0;i<n;i++){scanf("%i",&end[i]);}
		
		r=0;
		for (int i=1;i<n;i++) {
			for (int j=0;j<i;j++){
				if (beg[end[i]-1]<beg[end[j]-1]) r++;
			}
		}
		
		printf("%i\n",r);
	}
	
	return 0;
}
