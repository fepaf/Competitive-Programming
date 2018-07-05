// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Lista de Compras
// Nível: 1
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2729

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

set<string> lista;
int n;
string linha, word, ans;
stringstream ss;

int main(){_
    cin >> n;
    cin.ignore();
    while (n--){
        getline(cin, linha);
        for (ss << linha; ss >> word;){
            lista.insert(word);
        }
        ans = "";
        for (auto produto : lista){
            ans += " "+produto;
        }
        cout << ans.substr(1) << endl;
        ss.clear(); lista.clear();
    }
    return 0;
}

