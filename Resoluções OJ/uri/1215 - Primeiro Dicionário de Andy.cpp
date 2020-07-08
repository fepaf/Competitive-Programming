// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Primeiro Dicionário de Andy
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1215

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string linha,word;
stringstream ss;
set<string> dicio;

int main(){_
    while (getline(cin,linha)){
        for (char &c : linha){
            c = (isalpha(c) ? tolower(c) : ' ');
        }
        ss<<linha;
        while (ss>>word){
            dicio.insert(word);
        }
        ss.clear();
    }
    for (string word : dicio){
        cout<<word<<endl;
    }
    return 0;
}

