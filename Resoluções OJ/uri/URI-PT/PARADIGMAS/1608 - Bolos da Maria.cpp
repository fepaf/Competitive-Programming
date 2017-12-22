// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Bolos da Maria
// Nível: 2
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1608

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>

using namespace std;

int t,i,b,d,j,q,qtd,idx,custo,ans;
vi ing;

int main () {_
    for (cin>>t; t--;){
        cin>>d>>i>>b;
        ing =  vi(i,0);
        for (auto& x : ing) cin>>x;
        ans=0;
        while (b--){
            cin>>q;
            custo=0;
            while (q--){
                cin>>idx>>qtd;
                custo+=ing[idx]*qtd;
            }
            ans=max(ans, (d/custo));
        }
        cout<<ans<<endl;
    }
    return 0;
}

