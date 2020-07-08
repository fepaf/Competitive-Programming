// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Um-Dois-Três
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1332

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl "\n"

using namespace std;

int dif,n;
string num;

int main(){_
	cin>>n;
	while (n--){
		cin>>num;
		if (num.size()==3){
			cout<<((num[0]!='t') + (num[1]!='w') + (num[2]!='o')<=1?2:1)<<endl;		
		}
		else cout<<3<<endl;
	}
	

	return 0;
}
