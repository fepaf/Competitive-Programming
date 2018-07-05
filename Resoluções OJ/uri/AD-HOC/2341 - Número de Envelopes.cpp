// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Número de Envelopes
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2341

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,k,freq[1001],i,ans,x;

int main(){
    cin>>n>>k;
        for (i=n;i--;){
            cin>>x;
            freq[x]++;
        }
        for (ans=n,i=1;i<=k;i++) ans=min(ans,freq[i]);
        cout<<ans<<endl;
    
    return 0;
}

