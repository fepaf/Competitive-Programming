// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Turistas no Parque Huacac...
// Nível: 5
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2708

#include<bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string acao;
int turistas, jipes, t;

int main(){_
    while (cin>>acao && acao!="ABEND"){
        cin>>t;
        if (acao == "SALIDA"){
            turistas += t;
            jipes++;
        }
        else{
            turistas -= t;
            jipes--;
        }
    }
    cout<<turistas<<endl<<jipes<<endl;
    return 0;
}

