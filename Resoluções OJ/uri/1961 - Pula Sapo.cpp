// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pula Sapo
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1961

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
    int n,p,x,a,ok;
    cin>>p>>n;
    cin>>a;
    for (ok=1;--n;){
        cin>>x;
        ok*=(abs(x-a)<=p);
        a=x;
    }
    cout<<(ok?"YOU WIN":"GAME OVER")<<endl;
    return 0;
}

