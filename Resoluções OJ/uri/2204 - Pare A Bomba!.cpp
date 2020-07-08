// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pare A Bomba!
// Nível: 5
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2204

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int t;
string a,b;

int main(){_
    cin>>t;
    while (t--){
        cin>>a>>b;
        cout<<(a==b ? a : "1")<<endl;
    }
    return 0;
}

