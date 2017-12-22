// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Botas Perdidas
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1245

#include <stdio.h>
#include <string.h>
#define min(x,y) (x<y?x:y)

int s[31][2];

int main(){
	int n,m,r;
	char l;
	
	while (scanf("%i",&n)!=EOF){
		memset(s,0,sizeof(s));
		for (int i=0;i<n;i++){
			scanf("%i %c",&m,&l);
			s[m-30][l-'D']++;
		}
		r=0;
		for (int i=0;i<31;i++) r+=min(s[i][0],s[i][1]);
		printf("%i\n",r);
	}
	
	
	return 0;
}

