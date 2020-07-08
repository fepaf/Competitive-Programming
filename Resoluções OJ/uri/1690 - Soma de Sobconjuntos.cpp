// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Soma de Sobconjuntos
// Nível: 5
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1690

#include<bits/stdc++.h>
#define MAXN 10123
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int t,n,a[MAXN];
long long ans;

int main(){_
    cin>>t;
    while(t--){
        cin>>n;
        for (int i=n;i--;){
            cin>>a[i];
        }
        sort(a,a+n);
        ans=0;
        for (int i=0; i<n; i++){
            if (a[i]>ans+1) break;
            ans+=a[i];
        }
        cout<<++ans<<endl;
    }
    return 0;
}

