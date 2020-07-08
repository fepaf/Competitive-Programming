// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: A Última Criança Boa
// Nível: 1
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2023

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);

using namespace std;

pair <string,string> nome[1002];
int tam,i;

int main(){_
    for (tam=0;getline(cin,nome[tam].second);tam++){
        for (int j=0;j<nome[tam].second.length();j++) nome[tam].first+=tolower(nome[tam].second[j]);
    }
    sort(nome,nome+tam);
    cout<<nome[tam-1].second<<endl;
    return 0;
}


