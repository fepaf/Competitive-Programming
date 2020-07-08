// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Vende-se
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2433

#include<iostream>
#include<algorithm>
 
using namespace std;
 
main (){
	int x[100000],i,j,n,k,d,r;
	scanf("%i %i",&n,&k);
	d=n-k-1;
	for (i=0;i<n;i++){
		scanf("%i",&x[i]);
	}
	sort(x,x+n);
	r=1000000;
	for (i=0;i<n-d;i++){
		if (x[i+d]-x[i]<r) r=x[i+d]-x[i];
	}
	printf("%i\n",r);
	return 0;
}
 
