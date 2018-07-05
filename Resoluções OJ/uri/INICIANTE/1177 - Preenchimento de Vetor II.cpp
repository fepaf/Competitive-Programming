// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Preenchimento de Vetor II
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1177

#include<bits/stdc++.h>
#define tam 1000
using namespace std;

int i,t;
double x[tam];

int main(){
	cin>>t;
	for (i=0;i<tam;i++)  printf("N[%i] = %i\n",i,i%t);
	return 0;
}
