// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pares entre Cinco Números
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1065

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int a,b,c,d,e;

int main(){_
    cin>>a>>b>>c>>d>>e;
    cout<<((a%2==0)+(b%2==0)+(c%2==0)+(d%2==0)+(e%2==0))<<" valores pares"<<endl;
    return 0;
}

