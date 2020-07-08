// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Hiperprimos
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1602

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define maxn 2000002
 
using namespace std;

typedef long long ll;
 
ll i,j,n,qf,e,primo[maxn],comp[maxn],qhp[maxn],t,p22[]={1,2,4,6,10,12,16,18};
 
void crivo(ll n){
     ll k;
    primo[t++]=2;
    
    for (i=4;i<=n;i+=2) comp[i]=1;
    
    for (i=3;i*i<=n;i+=2){
        if (!comp[i]){
        	primo[t++]=i;
            for (j=i*i; j<=n; j+=i) comp[j]=1;
        }
    }
    for (i=0; i<t; i++) for (j=0; (k=pow(primo[i],p22[j]))<=n && j<8; j++) comp[k]=0;
}
 
ll hp(ll x){
    return 1-comp[x];
}
 
int main(){_
	crivo(maxn);
    for (qhp[2]=1,i=3;i<=maxn;i++) qhp[i]=qhp[i-1]+hp(i);
 
    while (cin>>n) cout<<qhp[n]<<endl;
    return 0;
}
