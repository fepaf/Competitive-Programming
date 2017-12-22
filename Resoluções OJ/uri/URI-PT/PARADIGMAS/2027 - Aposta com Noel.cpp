// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Aposta com Noel
// Nível: 2
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2027

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

int resp[101],n,m,i,tam;

int main(){_
    for (tam=0;cin>>n>>m;tam++){
        resp[tam]=__gcd(n,m);
        cout<<(resp[tam]>5?"Noel":"Gnomos")<<endl;
    }
    for (i=tam;i--;) cout<<resp[i]<<" ";
    cout<<endl;
    return 0;
}
