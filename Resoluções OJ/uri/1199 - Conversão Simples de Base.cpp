// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Conversão Simples de Base
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1199

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string n;

int main(){_
    // cout<<strtoll("0x80685",NULL,16)<<endl;
    while (cin>>n && n!="-1"){
        // cout<<n<<" ";
        if (n.size()>1 && n[1]=='x') cout<<dec<<strtoll(n.c_str(),NULL,16)<<endl;
        else cout<<"0x"<<hex<<uppercase<<strtoll(n.c_str(),NULL,10)<<endl;
    }
    return 0;
}

