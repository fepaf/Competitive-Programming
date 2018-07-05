// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Número Solitário
// Nível: 5
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2091

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long n,a,ans;

int main(){
    while ((cin>>n)&&n){
        ans=0;
        while (n--){
            cin>>a;
            ans^=a;
        }
        cout<<ans<<endl;
    }
    return 0;
}

