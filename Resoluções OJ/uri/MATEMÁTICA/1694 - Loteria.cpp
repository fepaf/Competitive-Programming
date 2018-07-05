// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Loteria
// Nível: 5
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1694

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);
#define maxn 2510
 
using namespace std;
 
typedef unsigned long long ll;
 
ll i,j,n,m,k,num,resp,l,r,cont;
bitset <maxn> ehcomp;
 
void crivo (ll n){
    ll i,j;
    ehcomp.reset();
    ehcomp[0]=ehcomp[1]=1;
    for (i=3;i*i<=n;i+=2){
        if (!ehcomp[i]){
            for (j=i*i;j<=n;j+=i) ehcomp[j]=1;
        }
    }
    for (j=4;j<=n;j+=2) ehcomp[j]=1;
}
 
ll comb(ll n,ll k){
    ll i,c;
    if (n<k) return 0;
    for (c=1,i=0;i<k;i++) c=(c*(n-i))/(i+1);
    return c;
}
 
int main(){_
    crivo(2502);
    while ((cin>>n>>m>>k) && (n||m||k)){
        resp=0;
        for (i=n;i--;){
            for (num=0,j=m;j--;){
                num+=ehcomp[i*m+j];
            }
            resp+=comb(num,k);
        }
        for (i=m;i--;){
            for (num=0,j=n;j--;){
                num+=ehcomp[j*m+i];
            }
            resp+=comb(num,k);
        }
        if (k==1) resp/=2;
        //if (resp!=r) cont++;//printf("%lli %lli %lli : %lli != %lli\n",n,m,k,r,resp);
        cout<<resp<<endl;
    }
    //cout<<"erros: "<<cont<<endl;
    return 0;
}
