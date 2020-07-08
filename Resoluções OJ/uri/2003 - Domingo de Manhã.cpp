// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Domingo de Manhã
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2003

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int h,m;
char p;

int main(){_
	while (cin>>h>>p>>m)cout<<"Atraso maximo: "<<(480-h*60-m>=60 ? 0 : 60-(480-h*60-m))<<endl;
	return 0;
}
