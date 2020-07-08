// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Em Dívida
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2044

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int ans,n,p,sum;

int main(){_
    while ((cin>>n) && (~n)){
        ans=sum=0;
        for (int i=1;i<=n;i++){
            cin>>p;
            sum = (sum+p)%100;
            ans += (sum==0);
        }
        cout<<ans<<endl;
    }
    return 0;
}

