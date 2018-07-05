// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Contagem de Dígitos
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1138

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll a,b,qa[10],qb[10],n,i;

void *c(ll n,ll *q){
	ll r=0 , p10=1, r10, i;
	static ll *ret;
	for (i=10;i--;) q[i]=0;
		while (n){
			r10=n%10;
			for (i=10;i--;) q[i]+=(n/10)*p10;
			for (i=r10;i--;) q[i]+=p10;
			q[r10]+=r+1;
			q[0]-=p10;
			r=p10*r10+r;
			p10*=10;
			n/=10;
		}
}

int main(){
	ios_base::sync_with_stdio(false);
	
	while ((cin>>a>>b)&&(a||b)){
		c(a-1,qa);
		c(b,qb);
		cout<<qb[0]-qa[0];
		for (i=1;i<10;i++) cout<<" "<<qb[i]-qa[i];
		cout<<endl;
	}
	
	return 0;
}
