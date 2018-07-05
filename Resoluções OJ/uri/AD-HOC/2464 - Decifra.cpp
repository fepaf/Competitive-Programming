// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Decifra
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2464

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

char cif[1<<8];
char c;

int main(){_
    for (int i='a'; i<='z'; ++i){
        cin >> c;
        cif[i] = c;
    }
    while (cin >> c){
        cout << cif[c];
    }
    cout << endl;
    return 0;
}

