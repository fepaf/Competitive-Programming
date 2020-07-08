// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pares e Ímpares
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1259

#include<cstdio>
#include<algorithm>
#define MAX 100000

using namespace std;

int v[MAX], n;

bool cmp(int a, int b){
	if ((a%2) && (b%2)) return b<a;
	else if (!(a%2) && !(b%2)) return a<b;
	else return b%2;
}

int main(){	
	
	scanf("%i",&n);
	for (int i=0;i<n;i++) scanf("%i",&v[i]);
	sort(v,v+n,cmp);
	for (int i=0;i<n;i++) printf("%i\n",v[i]);
	
	return 0;
}
