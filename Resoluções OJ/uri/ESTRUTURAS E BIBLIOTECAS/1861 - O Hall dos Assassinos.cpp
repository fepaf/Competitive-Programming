// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: O Hall dos Assassinos
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1861

#include<bits/stdc++.h>
#define inf -123456
#define _ ios_base::sync_with_stdio(false);

using namespace std;

map <string,int> murder;
map <string,int>::iterator it;
string s1,s2;


int main(){_
	while (cin>>s1>>s2){
		if (murder.find(s1)!=murder.end()) murder[s1]++;
		else murder[s1]=1;
		murder[s2]=inf;
	}
	cout<<"HALL OF MURDERERS"<<endl;
	for (it=murder.begin();it!=murder.end();it++) if (it->second>0) cout<<it->first<<" "<<it->second<<endl;
	return 0;
}
