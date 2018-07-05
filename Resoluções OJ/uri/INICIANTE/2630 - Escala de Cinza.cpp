// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Escala de Cinza
// Nível: 5
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2630

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int r,g,b,t,caso;
string s;

int main(){_
    cin>>t;
    for (caso = 1; caso<= t; caso++){
        cin>>s>>r>>g>>b;
        cout<<"Caso #"<<caso<<": ";
        if (s=="eye"){
            cout<<((int)(0.3*r+0.59*g+0.11*b))<<endl;
        }
        else if (s=="mean"){
            cout<<(r+g+b)/3<<endl;
        }
        else if (s=="max"){
            cout<<max(r,max(g,b))<<endl;
        }
        else {
            cout<<min(r,min(g,b))<<endl;
        }
    }
    return 0;
}

