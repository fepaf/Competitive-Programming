// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Revisão de Contrato
// Nível: 3
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1120

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int d,i,t;
string n,s;

int main(){_
    while ((cin>>d>>n)&&d&&(n!="0")){
        t=n.size();
        for (s="",i=0;i<t;i++) n[i]!=(d+'0') ? s+=n[i] : "";
        while (s.size() && s[0]=='0') s.erase(0,1);
        cout<<(s.size() ? s : "0")<<endl;
    }
    return 0;
}
