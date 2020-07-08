// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Instruções do Robô
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1574

#include<iostream>
#include<cstdio>
#include<cstring>
#define max 100

using namespace std;

int main (){
	int t,n,x,i,d[max],l;
	char ins[21];
	
	scanf("%i",&t);
	while(t--){
		x=0;
		scanf("%i",&n);
		for (i=0;i<n;i++){
			scanf(" %s",&ins);
			if (!strcmp(ins,"RIGHT")) d[i]=1;
			else if (!strcmp(ins,"LEFT")) d[i]=-1;
			else{
				scanf(" %s",&ins);
				scanf("%i",&l);
				d[i]=d[l-1];
			} 		
			x+=d[i];
		}
		printf("%i\n",x);
	}
	
	
	return 0;
}
