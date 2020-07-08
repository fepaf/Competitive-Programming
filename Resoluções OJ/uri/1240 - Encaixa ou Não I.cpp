// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Encaixa ou Não I
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1240

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

int a,b,fit,n;

int main(){_
	cin>>n;
	while (n--){
		cin>>a>>b;
		for (fit=1;b;){
			fit*=(a%10==b%10);
			a/=10;
			b/=10;
		}
		cout<<(fit ? "encaixa":"nao encaixa")<<endl;
	}
	return 0;	
}
