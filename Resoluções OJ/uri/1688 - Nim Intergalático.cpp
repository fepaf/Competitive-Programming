// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Nim Intergalático
// Nível: 5
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1688

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

typedef long long ll;
ll n,k,q,a,b;

ll xut(ll n){return n<0? 0 : (n>>1)&1^(n&1?1:n);}

int main(){_
	while (cin>>n>>q){
		while (q--){
			cin>>a>>b>>k;	
			cout<<(xut(a-1)^xut(a+k-1)^xut(b+k)^xut(b)^xut(n) ? "JABBA" : "HAN")<<endl;
		}
	}
	return 0;
}
