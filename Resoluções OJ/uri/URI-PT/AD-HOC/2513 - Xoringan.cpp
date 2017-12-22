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

//        for (sum=0ULL,i=1; i<=n; i++) for (j=i;j<=n;j++) sum=(sum+(v[i-1]^v[j])%MOD)%MOD;

        for (ans=0ULL,i=64;i--;){
            for (c=0,p=(1ULL<<i),j=1;j<=n;j++) c+=((v[j]&p)!=0ULL);
            ans=( ans + ( ( ( (c*(n-c+1)) ) * ( p % MOD) ) ) );
        }
/*        for (ans=i=0, p=1; i<30; i++, p<<=1) {
            c=0;
            for (j=1; j<=n; j++) {
                if (v[j]&p) c++;
            }
            ans+=(long long)c*(n-c+1)*p;
        }*/
//        cout<<sum<<" "<<ans<<(sum==ans ? " SUCESSO" : " FALHA")<<endl;
		ans%=MOD;
		cout<<ans<<endl;				
    }
    return 0;
}
