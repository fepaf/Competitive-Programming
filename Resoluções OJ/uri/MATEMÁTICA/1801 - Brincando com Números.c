// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Brincando com Números
// Nível: 6
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1801

#include<stdio.h>
#include<math.h>
#define zerar() for (i=10;i--;) ydig[i]=0;

long long int x,y,r,beg,end,xdig[10],ydig[10],n,ok,i,m;

int main(){
	scanf("%lli",&x);
	
	n=x;
	while (n){
		xdig[n%10]++;
		n/=10;
	}
	
	beg=ceil(sqrt(x));
	end=ceil(sqrt(x*10));
	for (m=beg;m<=end;m++){
		y=m*m-x;
		while (y){
			ydig[y%10]++;
			y/=10;
		}
		
		ok=1;
		for (i=10;i--;) ok*=(xdig[i]==ydig[i]);
		
		r+=ok;
		zerar()
	}
	
	printf("%lli\n",r);
	return 0;
}
