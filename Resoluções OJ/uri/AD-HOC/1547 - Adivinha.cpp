// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Adivinha
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1547

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int n,qt,s,x[11],pos;

int main(){_
	cin>>n;
	while (n--){
		cin>>qt>>s;
		pos=1;
		for (int i=1;i<=qt;i++){
			cin>>x[i];
			pos= (abs(x[i]-s)<abs(x[pos]-s) ? i : pos);
		}
		cout<<pos<<endl;
	}

	return 0;
}
