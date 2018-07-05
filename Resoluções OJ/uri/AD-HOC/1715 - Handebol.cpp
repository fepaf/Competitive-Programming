// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Handebol
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1715

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,x,r,ok;

int main(){_
    cin>>n>>m;
    for (int i=n;i--;){
        ok=1;
        for (int j=m;j--;){
            cin>>x;
            ok*=(x!=0);
        }
        r+=ok;
    }
    cout<<r<<endl;
    return 0;
}

