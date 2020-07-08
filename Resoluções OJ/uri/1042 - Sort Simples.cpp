// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sort Simples
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1042

#include<cstdio>
#include<algorithm>

using namespace std;

int main(){
	int v[3],w[3];
	scanf("%i %i %i",&v[0],&v[1],&v[2]);
	w[0]=v[0];
	w[1]=v[1];
	w[2]=v[2];
	
	sort(w,w+3);
	
	printf("%i\n%i\n%i\n\n%i\n%i\n%i\n",w[0],w[1],w[2],v[0],v[1],v[2]);
	return 0;
}
