// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Loteria
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2473

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

set<int> st;
int i,v;

int main(){_
	for (i=12;i--;){
		cin>>v;
		st.insert(v);
	}
	switch (st.size()){
		case 9:
			cout<<"terno"<<endl;
			break;
		case 8:
			cout<<"quadra"<<endl;
			break;
		case 7:
			cout<<"quina"<<endl;
			break;
		case 6:
			cout<<"sena"<<endl;
			break;
		default:
			cout<<"azar"<<endl;
	}
	return 0;
}

