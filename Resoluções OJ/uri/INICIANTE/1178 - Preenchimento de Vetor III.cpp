// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Preenchimento de Vetor III
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1178

#include<bits/stdc++.h>
#define tam 100
using namespace std;

int i;
double t;

int main(){
	cin>>t;
	for (i=0;i<tam;i++)  printf("N[%i] = %.4lf\n",i,t) , t/=2;
	return 0;
}
