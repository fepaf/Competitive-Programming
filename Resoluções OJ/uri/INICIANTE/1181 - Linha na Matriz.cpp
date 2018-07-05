// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Linha na Matriz
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1181

#include<bits/stdc++.h>
#define tam 12
using namespace std;

int i,j,l;
char t;
double m[tam][tam],s=0;

int main(){
	cin>>l>>t;
	for (i=0;i<tam;i++){
		for (j=0;j<tam;j++){
			scanf("%lf",&m[i][j]);
			if (i==l) s+=m[i][j];
		}
	}
	printf("%0.1lf\n",(t=='S'?s:s/tam));
	return 0;
}
