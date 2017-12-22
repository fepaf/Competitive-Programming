// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Getline One
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1216

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

double ans,dist;
int f;
string nome;

int main(){_
	ans=0;
	while (getline(cin,nome)){
		cin>>dist;
		getline(cin,nome);
		ans+=dist;
		f++;
	}
	cout<<fixed<<setprecision(1)<<ans/f<<endl;	
    return 0;
}
