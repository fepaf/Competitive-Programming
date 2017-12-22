// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Construindo Casas
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1541

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){_
    long long r;
    double a,b,c;
    while ((cin>>a) && a){
        cin>>b>>c;
        r=sqrt(a*b*(100.0/c));
        cout<<r<<endl;
    }
    return 0;
}

