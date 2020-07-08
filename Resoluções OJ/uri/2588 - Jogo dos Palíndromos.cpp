// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jogo dos Palíndromos
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2588

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int f[1<<8], ans;
string s;

signed main(){_
    while (cin >> s){
        for (int i=s.size();i--;){
            f[tolower(s[i])] ^= 1;
        }
        ans = 0;
        for (int i='a'; i<='z'; ++i){
            ans += f[i];
            f[i] = 0;
        }
        cout << ans-(ans > 0) << endl;
    }
    return 0;
}

