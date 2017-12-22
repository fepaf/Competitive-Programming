// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Diga-me a Frequência
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1251

#include<bits/stdc++.h>
#define ic pair<char,int>
#define fs first
#define sc second
#define eb emplace_back
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string linha;
vector<ic> pares;
map<char,int> f;
int caso;

bool cmp(ic a,ic b){
    if (a.sc != b.sc) return a.sc<b.sc;
    return a.fs > b.fs;
}

int main(){_
    while (getline(cin,linha)){
        if (caso++) cout<<endl;
        for (char c : linha){
            if (32<=c && c<128){
                f[c]++;
            }
        }
        for (auto par : f){
            pares.eb(par);
        }
        sort(pares.begin(),pares.end(),cmp);
        for (auto par : pares){
            cout<<((int)par.fs)<<" "<<(par.sc)<<endl;
        }
        f.clear() , pares.clear();
    }
    return 0;
}

