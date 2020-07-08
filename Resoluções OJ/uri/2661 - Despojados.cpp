// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Despojados
// Nível: 5
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2661

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1000123
#define vi vector<ll>
#define eb emplace_back
#define ll long long

using namespace std;

vi primos;
bitset <MAX> ehcomp;
ll n, ans;
ll tam,cntp;

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
	cin>>n;
	for (int p : primos){
		if (n%p==0){
			++cntp;
		}
		while (n%p==0){
			n/=p;
		}
	}
	if (n!=1) ++cntp;
	ans = (1<<cntp)-cntp-1;
	cout<<ans<<endl;
	return 0;
}
