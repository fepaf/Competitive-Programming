// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Embaralhando de Novo
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1981

#include <bits/stdc++.h>
#define maxn 10007
#define m 100000007
#define _ ios_base::sync_with_stdio(false);
 
using namespace std;
typedef long long ll;
 
ll n,freq[26],t,resp,expo[maxn],comp[maxn],tam;
vector <ll> primos;
 
void crivo(ll n){
    ll i,j;
 
    for (i=3;i*i<=n;i+=2){
        if (!comp[i]){
            for (j=i*i;j<=n;j+=i) comp[j]=1;
        }
    }
 
    primos.push_back(2);
 
    for (i=3;i<=n;i+=2){
        if (!comp[i]){
            primos.push_back(i);
         //   cout<<i<<" "<<endl;
        }
    }
}
 
string s;
 
int main(){_
    crivo(10002);
    while ((cin>>s) && s!="0"){
        t=s.length();
 
        for (ll i=t;i--;){
            freq[s[i]-'a']++;
        }
 
 		tam=primos.size();
        for (ll i=0;primos[i]<=t && i<tam;i++){
            expo[i]=0;
            for (ll j=primos[i];j<=t;j*=primos[i]){
                expo[i]+=(t/j);
            }
        }
 
        for (ll k=26;k--;){
            for (ll i=0;primos[i]<=freq[k] && i<tam;i++){
                for (ll j=primos[i];j<=freq[k];j*=primos[i]){
                    expo[i]-=(freq[k]/j);
                }
            }
            freq[k]=0;
        }
 
        resp=1;
        for (ll i=0;primos[i]<=t && i<tam;i++){
            for (ll j=0;j<expo[i];j++) resp=((resp%m)*(primos[i]%m))%m;
        }
 
        cout<<resp<<endl;
    }
   return 0;
}
