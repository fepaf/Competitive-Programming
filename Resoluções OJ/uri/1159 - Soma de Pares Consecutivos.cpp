// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Soma de Pares Consecutivos
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1159

#include<bits/stdc++.h>

using namespace std;

long long n,i,x,s;

int main(){
	
	while((cin>>x)&&x){
		s=i=0;
		while (i<5){
			if (x%2==0) s+=x,i++;
			x++;
		}
		cout<<s<<endl;
	}
	return 0;
}
