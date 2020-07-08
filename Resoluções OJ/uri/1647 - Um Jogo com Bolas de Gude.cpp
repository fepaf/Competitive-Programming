// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Um Jogo com Bolas de Gude
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1647

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
 
using namespace std;

long long n,m,i,s;

int main() {_
    while ((cin>>n)&&n){
        for (s=i=0;i<n;i++){
            cin>>m;
            s+=(m*(1LL<<i));
        }
        cout<<s<<endl;
    }
    return 0;
}
