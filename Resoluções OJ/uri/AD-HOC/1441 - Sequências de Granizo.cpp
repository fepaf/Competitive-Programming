// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sequências de Granizo
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1441

#include<bits/stdc++.h>
#define ll long long
#define _ ios_base::sync_with_stdio(0);

using namespace std;

ll h,ans;

int main(){_
    while (cin>>h && h){
        ans=h;
        while (h!=1){
            h= (h&1 ? 3*h+1 : h>>1);
            ans=max(h,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}

