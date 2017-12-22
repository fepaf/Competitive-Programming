// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Quadro De Medalhas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2312

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

struct medal{
	int o,p,b;
	string nome;
};

medal pais[500];
int n,i;

bool cmp(medal a, medal b){
	if (a.o!=b.o) return a.o>b.o;
	if (a.p!=b.p) return a.p>b.p;
	if (a.b!=b.b) return a.b>b.b;
	return a.nome<b.nome;
}

int main(){_
	while (cin>>n){
		for (i=n;i--;) cin>>pais[i].nome>>pais[i].o>>pais[i].p>>pais[i].b;
		sort(pais,pais+n,cmp);
		for (i=0;i<n;i++) cout<<pais[i].nome<<" "<<pais[i].o<<" "<<pais[i].p<<" "<<pais[i].b<<endl;
	}
	return 0;
}
