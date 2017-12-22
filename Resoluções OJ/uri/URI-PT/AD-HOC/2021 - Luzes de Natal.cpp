// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Luzes de Natal
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2021

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

int m,n,p,q,i,j,s;

int main(){
	while ((cin>>m>>n>>p) && (m||n||p)){
		for (s=0,i=p;i--;){
			cin>>q;
			s+=n-((q-1)%n+1)+1;
		}
		cout<<"Lights: "<<s<<endl;
	}
	return 0;
}
