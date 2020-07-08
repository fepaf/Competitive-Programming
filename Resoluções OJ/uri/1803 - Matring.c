// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Matring
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1803

#include<stdio.h>
#include<string.h>

int n,f,l,i,j,c;
char m[4][83];

int main(){	
	for (i=0;i<4;i++) scanf("%s",&m[i]);
	
	n=strlen(m[0]);
	
	for (i=0;i<4;i++) f=(m[i][0]-'0')+f*10;
	for (i=0;i<4;i++) l=(m[i][n-1]-'0')+l*10;
	
	for (i=1;i<n-1;i++){
		for (c=0,j=0;j<4;j++){
			c=10*c+(m[j][i]-'0');
		}
		c=((f%257)*(c%257)+(l%257))%257;
		printf("%c",c);
	}
	printf("\n");
	
	return 0;
}

