// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Iu-Di-Oh!
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2542

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,l,marc[1<<8][1<<8],leo[1<<8][1<<8],cm,cl,a;

signed main(){_
    while (cin >> n >> m >> l){
        for (int i=1; i<=m; ++i){
            for (int j=1; j<=n; ++j){
                cin >> marc[i][j];
            }
        }
        for (int i=1; i<=l; ++i){
            for (int j=1; j<=n; ++j){
                cin >> leo[i][j];
            }
        }
        cin >> cm >> cl >> a;
        cout << (marc[cm][a] == leo[cl][a] ? "Empate" : (marc[cm][a] > leo[cl][a] ? "Marcos" : "Leonardo" )) << endl;
    }
    return 0;
}

