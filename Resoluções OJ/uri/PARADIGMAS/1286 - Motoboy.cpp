// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Motoboy
// Nível: 4
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1286

#include<iostream>
#include<algorithm>
#include<cstdio>
#define maxn 20
#define maxp 30

using namespace std;

typedef struct tipo{
	int v,t;
}tipo;

tipo ped[maxn+1];
int best[maxn+1][maxp+1];

int cmp(tipo a,tipo b){
	return (a.t) - (b.t);
}

int main(){
	int n,p,i,j;
	
	while (scanf("%i",&n)==1 && n){
		scanf("%i",&p);
		
		for (i=1;i<=n;i++){scanf("%i %i",&ped[i].v,&ped[i].t);}
		
		//sort(ped+1,ped+n+1,cmp);
		
		for (i=0;i<=p;i++) best[0][i]=0;
		
		for (i=1;i<=n;i++){
			best[i][0]=0;
			for (j=1;j<=p;j++){
				if (ped[i].t<=j){
					if (best[i-1][j-ped[i].t]+ped[i].v>best[i-1][j]) best[i][j]=best[i-1][j-ped[i].t]+ped[i].v;
					else best[i][j]=best[i-1][j];
				}
				else best[i][j]=best[i-1][j];
			}
		}
		
		printf("%i min.\n",best[n][p]);
	}
	return 0;
}
