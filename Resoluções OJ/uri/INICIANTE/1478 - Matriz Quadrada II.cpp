// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Matriz Quadrada II
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1478

#include<bits/stdc++.h>
#define tam 12
using namespace std;

int i,j,n,x;

int main(){
	while ((cin>>n)&&n){
		for (i=0;i<n;i++){
			cout<<setw(3)<<(abs(i)+1);
			for (j=1;j<n;j++){
				cout<<" "<<setw(3)<<(abs(i-j)+1);
			}
			cout<<endl;
		}
		cout<<endl;
	}
	
	return 0;
}
