// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Fábrica de Chocolate
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1573

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int a,b,c,ans;

int main(){_
    while ((cin>>a>>b>>c)&&(a||b||c)){
        ans=pow(a*b*c,(1.0/3.0));
        cout<<ans<<endl;
    }
    return 0;
}

