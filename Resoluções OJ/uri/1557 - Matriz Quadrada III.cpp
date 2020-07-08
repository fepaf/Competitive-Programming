// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Matriz Quadrada III
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1557

#include<bits/stdc++.h>
#define tam 12
using namespace std;

int i,j,n,x;

int main(){
	while ((cin>>n)&&n){
		x=ceil(log(1<<(2*(n-1)))/log(10));
		for (i=0;i<n;i++){
			cout<<setw(x)<<(1<<(i));
			for (j=1;j<n;j++){
				cout<<" "<<setw(x)<<(1<<(i+j));
			}
			cout<<endl;
		}
		cout<<endl;
	}
	
	return 0;
}
