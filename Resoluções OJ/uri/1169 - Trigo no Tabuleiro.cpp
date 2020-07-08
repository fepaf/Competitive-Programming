// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Trigo no Tabuleiro
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1169

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,x;
unsigned long long ans;

int main(){_
    cin>>n;
    while (n--){
        cin>>x;
        ans=floor((pow(2,x)-1)/12000);
        cout<<ans<<" kg"<<endl;
    }
    return 0;
}

