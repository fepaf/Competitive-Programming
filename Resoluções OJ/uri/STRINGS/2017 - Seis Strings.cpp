// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Seis Strings
// Nível: 5
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2017

#include<bits/stdc++.h>
#define MOD int(10e9)+7
#define ii pair<int, int>
#define vii vector<ii>
#define vi vector<int>
#define vd vector<double>
#define fs first
#define sc second
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string x,y[6];
int i,j,k,n,t,th2;
vii p = vii(5);

int main(){_
	getline(cin,x);
	cin>>k;
//	getline(cin,y[0]);
	for (i=0;i<5;i++){
		getline(cin,y[i]);
		p[i].fs=0;
		p[i].sc=i+1;
		t=min(y[i].size(),x.size());
		for (j=0;j<t;j++){
			p[i].fs+=(x[j]!=y[i][j]);
		}
		if (i==1) th2=p[1].fs;
	}
	sort(p.begin(),p.end());
	cout<<(p[0].fs > k ? -1 : p[0].sc)<<endl;
	if (p[0].fs <= k ) cout<<th2<<endl;
	return 0;
}
