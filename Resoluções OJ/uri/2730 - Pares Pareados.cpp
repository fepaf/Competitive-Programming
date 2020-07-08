// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pares Pareados
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2730

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ii pair<int, int>
#define mdc __gcd

using namespace std;

int n, a[1<<8], b[1<<8];
set<ii> pares;

int main(){_
    while ((cin >> n) && (n)){
        for (int i=n; i--;){
            cin >> a[i];
        }
        for (int i=n; i--;){
            cin >> b[i];
        }
        for (int i=n; i--;){
            for (int j=n; j--;){
                if (mdc(a[i],b[j])==1){
                    pares.insert(ii(a[i], b[j]));
                    pares.insert(ii(b[j], a[i]));
                }
            }
        }
        cout << pares.size() << endl;
        pares.clear();
    }
    return 0;
}

