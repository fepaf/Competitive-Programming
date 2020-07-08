// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Guerreiros Etruscos Nunca...
// Nível: 3
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1308

#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

unsigned long long x,n,t;

int main(){
    cin>>t;
    while (t--){
        cin>>n;
        x=(sqrt(1.0+8.0*n)-1.0)/2.0;
        cout<<x<<endl;
    }
    return 0;
}

