// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Onde Está Minha Caneta?
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2495

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n, ans, x;

int main(){
  while ((cin>>n)){
    ans=((n>>1)&1^(n&1?1:n));
    while (--n){
      cin>>x;
      ans^=x;
    }
    cout<<ans<<endl;
  }
  return 0;
}

