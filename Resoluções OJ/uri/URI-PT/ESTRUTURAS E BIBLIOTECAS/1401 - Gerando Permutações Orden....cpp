// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Gerando Permutações Orden...
// Nível: 3
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1401

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);
using namespace std;
  
int main(){_
    int n;
    string s;
      
    cin>>n;
      
    while (n--){
        cin>>s;
        sort(s.begin(),s.end());
        do{cout<<s<<endl;}while (next_permutation(s.begin(),s.end()));
        cout<<endl;
    }
      
    return 0;
}
