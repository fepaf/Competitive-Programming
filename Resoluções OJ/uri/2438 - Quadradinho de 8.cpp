// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Quadradinho de 8
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2438

#include <stdio.h>
 
long long int s[8],n,x,i,resto,r;
 
int main(){
	s[0]=1;
	scanf("%lli",&n);
	while (n--){
		scanf("%lli",&x);
		resto = (resto+x)%8;
		s[resto]++;
	}
	for (i=8;i--;) r+=(s[i]*(s[i]-1))/2;
	printf("%lli\n",r);
	return 0;
}
