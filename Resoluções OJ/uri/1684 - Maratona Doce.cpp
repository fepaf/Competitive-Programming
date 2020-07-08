// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Maratona Doce
// Nível: 3
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1684

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int f[10123],n,m,a,b,ans,t;

int main(){_
    for (cin>>t;t--;){
        cin>>n>>m;
        while (m--){
            cin>>a>>b;
            ++f[a] , ++f[b];
        }
        ans = 1;
        for (int i=0; i<n; i++){
            ans &= (!(f[i]&1));
            f[i] = 0;
        }
        cout<<(ans ? "Yes" : "No")<<endl;
    }
    return 0;
}

