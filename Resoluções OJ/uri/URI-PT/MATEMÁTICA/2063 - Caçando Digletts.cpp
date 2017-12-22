// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Caçando Digletts
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2063

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long

using namespace std;

signed n,b[1<<7],x;
bitset<(1<<7)> ciclo;
ll mmc,tam;

int main(){_
    while (cin>>n){
        for (int i=1;i<=n;i++){
            cin>>b[i];
        }
        ciclo.set();
        mmc = 1LL;
        for (int i=1;i<=n;i++){
            if (ciclo[i]) {
                for (tam = 1 , x = i;  b[x] != i; x = b[x] ){
                    ++tam;
                    ciclo[x] = 0;
                }
                ciclo[x] = 0;
                mmc = (mmc/__gcd(mmc,tam))*tam;
            }
        }
        cout<<mmc<<endl;
    }
    return 0;
}

