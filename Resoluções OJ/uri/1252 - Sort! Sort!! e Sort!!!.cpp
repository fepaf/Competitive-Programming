// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sort! Sort!! e Sort!!!
// Nível: 4
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1252

#include<cstdio>
#include<algorithm>
#define MAX 10000

using namespace std;

int v[MAX], n, m,i;

bool cmp(int a, int b){
	int x=a%m;
	int y=b%m;
	if (x < y) return true;
	else if (x==y){
		if ((a%2) && (b%2)) return b<a;
		else if (!(a%2) && !(b%2)) return a<b;
		else return (a%2);
	}
	else return false;
}

int main(){	
	do{
		scanf("%i %i",&n,&m);
		for (i=0;i<n;i++) scanf("%i",&v[i]);
		sort(v,v+n,cmp);
		printf("%i %i\n",n,m);
		for (i=0;i<n;i++) printf("%i\n",v[i]);
	}while (n||m);
	return 0;
}
