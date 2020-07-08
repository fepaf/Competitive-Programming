// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fila do Recreio
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1548

#include<cstdio>
#include<algorithm>
#define tam 1000

using namespace std;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	int n,m,p[tam],o[tam],r,i;
	
	scanf("%i",&n);
	
	while (n--){
		r=0;
		scanf("%i",&m);
		
		for (i=m;i--;) scanf("%i",&p[i]) , o[i]=p[i];
		
		sort(p,p+m);
		
		for (i=m;i--;) if (o[i]==p[i]) ++r;
		
		printf("%i\n",r);
	}
	
	return 0;
}

