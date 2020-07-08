// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Feedback
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1546

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int n,k,bug;
string nome[]={"Rolien","Naej","Elehcim","Odranoel"};

int main(){_
	cin>>n;
	while (n--){
		cin>>k;
		while (k--){
			cin>>bug;
			cout<<nome[bug-1]<<endl;
		}
	}

	return 0;
}
