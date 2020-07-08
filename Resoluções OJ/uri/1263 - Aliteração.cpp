// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Aliteração
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1263

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

string s,ant,linha;
int i,a,f;

int main(){_
    while (getline(cin,linha)){
        linha+=" .";
        a=0;
        stringstream ss(linha);
        f=1;
        ss>>ant;
        while (ss>>s){
            if (tolower(s[0])==tolower(ant[0])) f++;
            else {
                a+=(f>1);
                f=1;
            }
            ant=s;
        }
        cout<<a<<endl;
    }
    return 0;
}

