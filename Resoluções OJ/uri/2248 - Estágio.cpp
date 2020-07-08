// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Estágio
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2248

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 1<<10

using namespace std;

int n,c[MAXN],m[MAXN],ma,i,caso;

int main(){_
	while ((cin>>n)&&n){
		ma=-1;
		for (i=n;i--;) {
			cin>>c[i]>>m[i];
			ma=max(m[i],ma);
		}
		cout<<"Turma "<<++caso<<endl;
		for (i=n;i--;) {
			if (m[i]==ma) cout<<c[i]<<" ";
		}
		cout<<endl<<endl;
	}
}
