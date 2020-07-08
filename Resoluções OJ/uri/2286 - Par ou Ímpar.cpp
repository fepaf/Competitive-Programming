// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Par ou Ímpar
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2286

#include <stdio.h>
#include <string.h>
 
int n,a,b,t,i;
char win[100][11],j1[11],j2[11];
 
main (){
	for (t=1;;t++){
		scanf ("%i",&n);
		if (!n) break;
		scanf("%s %s",&j1,&j2);
		for (i=0;i<n;i++){
			scanf("%i %i",&a,&b);
			if ((a+b)%2) strcpy(win[i],j2);
			else strcpy(win[i],j1);
		}
		printf("Teste %i\n",t);
		for (i=0;i<n;i++) printf("%s\n",win[i]);
		printf("\n");
	}
	return 0;
}
 
