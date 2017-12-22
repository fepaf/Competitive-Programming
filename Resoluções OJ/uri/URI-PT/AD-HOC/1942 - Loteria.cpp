// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Loteria
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1942

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

typedef long long ll;

ll v,lsb;
map<ll,ll> base;
int n,k,b,i,j;

int main(){_
	while (scanf("%i %i",&n,&k)!=EOF){
		while (n--){
			for (v=0LL,i=k;i--;){
				scanf("%i",&b);
				v|=((ll)(b&1))<<i;
			}
			lsb= v & (-v);
			while (v && base.find(lsb)!=base.end()){
				v^=base[lsb];
				lsb= v & (-v);
			}
			base[lsb]=v;
		}
		printf("%c\n",(base.size()==k+1 ? 'N' : 'S'));
		base.clear();
	}
	return 0;
}


