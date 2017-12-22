// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Triângulo Trinomial, a Vi...
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1807

#include<bits/stdc++.h>
#define mm (1<<31)-1
#define _ ios_base::sync_with_stdio(false);

using namespace std;
typedef unsigned long long ll;

ll fexp(ll b, ll e, ll m){
	ll r;
	if (e==0) return 1%m;
	if (e==1) return b%m;
	r=fexp(b,e/2,m);
	r=(r*r)%m;
	if (e%2) r=(r*b)%m;
	return r;
}

int main(){_
	ll r;
	cin>>r;
	cout<<fexp(3,r,mm)<<endl;
	return 0;
}
