// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Filme
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1963

#include<bits/stdc++.h>

using namespace std;

long long n,p,q;
double ant,nov;

int main(){
	ios_base::sync_with_stdio(false);
	cin>>ant>>nov;
	printf("%.02lf%%\n",(nov-ant)/ant*100.0);
	return 0;
}
