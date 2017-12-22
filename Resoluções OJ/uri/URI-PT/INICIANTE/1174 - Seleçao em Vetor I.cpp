// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Seleçao em Vetor I
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1174

#include<bits/stdc++.h>
#define tam 100
using namespace std;

long long i;
double x[tam];

int main(){
	for (i=0;i<tam;i++){
		cin>>x[i];
	}
	for (i=0;i<tam;i++) if (x[i]<=10.0) printf("A[%lli] = %0.1lf\n",i,x[i]);
	return 0;
}
