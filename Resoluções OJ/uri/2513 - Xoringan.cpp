// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Xoringan
// Nível: 4
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2513

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 1000010
#define MOD 1000000007

using namespace std;

/*código que calcula a soma dos subarrays xor de um conjunto de N valores*/

typedef unsigned long long ll;

 ll v[MAXN],ans,sum,x,pref[MAXN];
 ll n,i,j,c,p;

int main(){_
    while (cin>>n){
        for (v[0]=0ULL,i=1;i<=n;i++){
            cin>>v[i];
			v[i]^=v[i-1];
        }


        for (ans=0ULL,i=64;i--;){
            for (c=0,p=(1ULL<<i),j=1;j<=n;j++) c+=((v[j]&p)!=0ULL);
            ans=( ans + ( ( ( (c*(n-c+1)) % MOD) * ( p % MOD) ) % MOD ) ) % MOD;
        }

		cout<<ans<<endl;				
    }
    return 0;
}
