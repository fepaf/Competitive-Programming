// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Espécies de Madeira
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1260

#include<bits/stdc++.h>

using namespace std;

string s;
int n,total;
map<string,int> freq;
map<string,int>::iterator it;

int main(){
    cin>>n;
    getline(cin,s);
    getline(cin,s);
    while (n--){
        total=0;
        while (getline(cin,s) && s!=""){
            freq[s]++;
            total++;
        }
        for (it=freq.begin(); it!=freq.end(); it++){
            cout<<fixed<<setprecision(4);
            string arvore=it->first;
            int apareceu=it->second;
            double porcentagem = (apareceu*100.00)/total;
            cout<<arvore<<" "<<porcentagem<<endl;
        }
        if (n) cout<<endl;
        freq.clear();
    }

    return 0;
}

