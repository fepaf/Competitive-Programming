// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Arrumando as Tarefas
// Nível: 1
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1704

#include<algorithm>
#include<cstdio>
#define tam 10000
#define zera(n) for (i=n;i--;) slot[i]=0

using namespace std;

typedef struct est{
	int v,t;
}est;

bool cmp(est a, est b){
	return (a.v<b.v);
}

int slot[tam];

int main(){
	int n,h,s,c,j,i;
	est tk[tam];
	
	while (scanf("%i %i",&n,&h)!=EOF){
		s=c=0;
		for (i=n;i--;) scanf("%i %i",&tk[i].v,&tk[i].t);
		
		sort(tk,tk+n,cmp);

		for (i=n;i--;){
			s+=tk[i].v;
			for (j=min(n,tk[i].t)-1;j>=0;j--){
				if (!slot[j]){
					c+=tk[i].v;
					slot[j]=1;
					break;
				}
			}
		}
		
		printf("%i\n",s-c);
		zera(n);
	}
	
	
	return 0;
}
