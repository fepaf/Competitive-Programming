// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Derivada de Polinômios
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2154

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long

using namespace std;

int t,c,e;
char x;
string sinal;

int main(){_
    while (cin>>t){
        cin>>c>>x>>e;
        cout<<c*e<<x;
        if (e>2) cout<<e-1;
        while (--t){
            cin>>sinal>>c>>x>>e;
            cout<<" + "<<c*e<<x;
            if (e>2) cout<<e-1;
        }
        cout<<endl;
    }
    return 0;
}

