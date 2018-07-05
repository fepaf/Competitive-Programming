// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Lista Telefônica Econômica
// Nível: 2
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1211

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(false);
  
using namespace std;
  
int main(){_
    int n,i,r,t,j;
    string x[100000];
      
    while (cin>>n){
        for (i=n;i--;){
            cin>>x[i];
        }
        sort(x,x+n);
        r=0;
        for (i=1;i<n;i++){
            t=x[i].size();
            for(j=0;x[i][j]==x[i-1][j] && j<t;j++);
            r+=j;
        }
        cout<<r<<endl;
    }
    return 0;
}
