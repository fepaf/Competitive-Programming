// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Conversa Internacional
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1581

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

int n,k,iguais;
string s[100];

int main(){
	cin>>n;
	while (n--){
		cin>>k;
		getline(cin,s[0]);
		iguais=1;
		for (int i=0;i<k;i++){
			cin>>s[i];
			iguais*=(s[i]==s[0]);
		}
		cout<<(iguais?s[0]:"ingles")<<endl;
	}
	return 0;
}
