// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Tetris
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2250

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 1<<10

using namespace std;

typedef pair<int,string> is;

string nome;
is jog[MAXN];
int j,i,p,me,ma,tot,k,pos,caso;

bool cmp(is a, is b){
	return a.first!=b.first ? a.first>b.first : a.second<b.second;
}

int main(){_
	while ((cin>>j)&&j){
		for (i=0;i<j;i++){
			cin>>nome;
			for (tot=ma=0,me=(1<<10),k=12;k--;){
				cin>>p;
				tot+=p;
				me=min(me,p);
				ma=max(ma,p);				
			}
			tot-=(me+ma);
			jog[i].first=tot, jog[i].second=nome;
		}
		stable_sort(jog,jog+j,cmp);
		cout<<"Teste "<<++caso<<endl;
		cout<<1<<" "<<jog[0].first<<" "<<jog[0].second<<endl;
		for (pos=1,i=1;i<j;i++){
			cout<<(jog[i].first==jog[i-1].first ? pos : pos=i+1)<<" "<<jog[i].first<<" "<<jog[i].second<<endl;
		}
		cout<<endl;
	}
}
