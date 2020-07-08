// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Procurando Subsequências
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2126

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string n1,n2;
int mask[10],r,i,n,m,pos,caso,qtd,ans;

int main(){
	while (cin>>n1>>n2){
		m=(int)n1.size() , n=(int)n2.size();
		ans=qtd=0,pos=-1;
		r=~1;
		for	(i=0;i<10;i++) mask[i]=~0;
		for	(i=0;i<m;i++) mask[n1[i]-'0'] &=~(1<<i);
		for (i=0;i<n;i++){
			r|=mask[n2[i]-'0'];
			r<<=1;
			if (!(r&(1<<m))) pos=(i-m+1);
			qtd+=(!(r&(1<<m)));
		}
		cout<<"Caso #"<<++caso<<":"<<endl;
		if (pos!=-1) cout<<"Qtd.Subsequencias: "<<qtd<<"\nPos: "<<pos+1<<endl;
		else cout<<"Nao existe subsequencia"<<endl;
		cout<<endl;
	}
	return 0;
}
