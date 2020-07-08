// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jogo do Maior
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1397

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int n,a,b,ca,cb;


int main(){_
	while ((cin>>n)&&n){
		ca=cb=0;
		while (n--){
			cin>>a>>b;
			ca+=(a>b);
			cb+=(b>a);
		}
		cout<<ca<<" "<<cb<<endl;
	}

	return 0;
}
