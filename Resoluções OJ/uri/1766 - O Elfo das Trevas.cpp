// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Elfo das Trevas
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1766

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

typedef struct est{
	string s;
	int p,i;
	double a;
}est;

bool cmp(est a, est b){
	if (a.p==b.p){
		if (a.i==b.i){
			if (a.a==b.a) return a.s<b.s;
			else return a.a<b.a;
		}
		else return a.i<b.i;
	}
	else return a.p>b.p;
}

int t,n,m;
est rena[1002];

int main(){
	cin>>t;
	for (int k=1;k<=t;k++){
		cin>>n>>m;
		for (int i=n;i--;) cin>>rena[i].s>>rena[i].p>>rena[i].i>>rena[i].a;
		sort(rena,rena+n,cmp);
		cout<<"CENARIO {"<<k<<"}"<<endl;
		for (int i=0;i<m;i++) cout<<i+1<<" - "<<rena[i].s<<endl;
	}
	return 0;
}
