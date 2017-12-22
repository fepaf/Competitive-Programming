// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Qual o Mais Rápido?
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2175

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

double o,b,i;

int main(){_
    while (cin>>o>>b>>i){
        if (o<b && o<i) cout<<"Otavio"<<endl;
        else if (b<o && b<i) cout<<"Bruno"<<endl;
        else if (i<o && i<b) cout<<"Ian"<<endl;
        else cout<<"Empate"<<endl;
    }
    return 0;
}

