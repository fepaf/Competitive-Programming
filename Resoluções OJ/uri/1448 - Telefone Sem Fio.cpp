// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Telefone Sem Fio
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1448

#include<bits/stdc++.h>
#define _ ios::base::sync_with_stdio(false);

using namespace std;

string s,s1,s2;
int m1,m2,t,k,i,w,r1,r2,win;

int main(){
	cin>>t;
	getline(cin,s);
	for (k=1;k<=t;k++){
		getline(cin,s);
		getline(cin,s1);
		getline(cin,s2);
		for (win=m1=m2=i=0;i<s.length();i++){
			r1=(s[i]==s1[i]);
			r2=(s[i]==s2[i]);
			m1+=r1;
			m2+=r2;
			if (r1!=r2 && !win) win=r1+r2*2;
		}
		cout<<"Instancia "<<k<<endl;
		if (m1>m2) cout<<"time 1";
		else if (m2>m1) cout<<"time 2";
		else if (win) cout<<"time "<<win;
		else cout<<"empate";
		cout<<"\n\n";
	}
	return 0;
}

