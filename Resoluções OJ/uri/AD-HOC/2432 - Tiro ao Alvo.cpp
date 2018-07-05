// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tiro ao Alvo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2432

#include <stdio.h>
#define max 100000
 
long long int r[max],c,t;
 
int bin(long long int dist){
	int inicio=0;
	int fim=c-1;
	int med;
	
	if (dist>r[fim]*r[fim]) return 0;
	
	while (inicio<fim){
		med=(inicio+fim)/2;
		
		if (dist<=r[med]*r[med]){
			fim=med;
		}
		else {
			inicio=med+1;
		}
		
	}
	return c-fim;
}
 
main (){
	long long int x,y,i,pont=0;
	scanf("%lld %lld",&c,&t);
	for (i=0;i<c;i++) scanf("%lld",&r[i]);
	while (t--){
		scanf("%lld %lld",&x,&y);
		pont+=(bin((x*x)+(y*y)));
	}
	printf("%lld\n",pont);
	return 0;
}
