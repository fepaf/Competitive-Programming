// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Insatisfação nas Eleições
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1615

#include<bits/stdc++.h>
#define ll long long
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,f[11],v,t,ans;

int main(){_
    cin>>t;
    while (t--){
        cin>>n>>m;
        for (int i=n+1;i--;) f[i]=0;
        for (int i=m;i--;){
            cin>>v;
            f[v]++;
        }
        ans=-1;
        for (int i=n+1;i--;){
            if (f[i]>m/2) ans=i;
        }
        cout<<ans<<endl;
    }
    return 0;
}

