// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pontos de Feno
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1261

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

map<string, int> hay;
int n,m,ans,value;
string word,frase;
stringstream ss;

int main(){_
    while (cin>>m>>n){
        while (m--){
            cin>>word>>value;
            hay[word]=value;
        }
        cin.ignore();
        while (n--){
            ans=0;
            while (getline(cin,frase) && frase!="."){
                for (ss<<frase; ss>>word;){
                    ans+=hay[word];
                }
                ss.clear();
            }
            cout<<ans<<endl;
        }
        hay.clear();
    }
    return 0;
}

