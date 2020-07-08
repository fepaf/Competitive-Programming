// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Baile de Formatura
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1776

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1000123
#define vi vector<ll>
#define eb emplace_back
#define ll long long

using namespace std;

vi primos;
bitset <MAX> ehcomp;
ll n, ans, t, caso, e;

void crivo(int n){
	primos.eb(2);
	for (int i=3; i*i<=n; i+=2){
		if (!ehcomp[i]){
			primos.eb(i);
			for (int j=i*i; j<=n; j+=i){
				ehcomp[j]=1;
			}
		}
	}
	for (int i=primos[primos.size()-1]+2; i<=n; i+=2){
		if (!ehcomp[i]){
			primos.eb(i);
		}
	}
}

int main(){_
	crivo(MAX-100);
	for (cin>>t; t--;){
		cin>>n;
		ans = n;
		for (int p : primos){
			e = 0;
			while (n%p==0){
				e^=1;
				n/=p;
			}
			if (e) ans *= p;
			if (n==1) break;
		}
		if (n!=1) ans *= n;
		cout<<"Caso #"<<++caso<<": "<<ans<<endl;
	}

    return 0;
}

