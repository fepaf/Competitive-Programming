// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Distância de Manhattan
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2437

#include<stdio.h>
#include<stdlib.h>
 
main (){
	int xr,yr,xm,ym,res;
	scanf("%i %i %i %i",&xm,&ym,&xr,&yr);
	res=(abs(xr-xm)+abs(yr-ym));
	printf("%i\n",res);
	return 0;
}
 
