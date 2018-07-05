// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Preenchimento de Vetor IV
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1179

#include<bits/stdc++.h>
#define tam 15
using namespace std;

int i,j,ti=0,tp=0,x,impar[5],par[5];

int main(){
	for (i=0;i<tam;i++){
		cin>>x;
		if (x&1) {
			impar[ti++]=x;
			if (ti==5) {
				for (j=0;j<5;j++) printf("impar[%i] = %i\n",j,impar[j]);
				ti=0;
			}
		}
		else {
			par[tp++]=x;
			if (tp==5) {
				for (j=0;j<5;j++) printf("par[%i] = %i\n",j,par[j]);
				tp=0;
			}
		}
	}
	for (j=0;j<ti;j++) printf("impar[%i] = %i\n",j,impar[j]);
	for (j=0;j<tp;j++) printf("par[%i] = %i\n",j,par[j]);
	return 0;
}
