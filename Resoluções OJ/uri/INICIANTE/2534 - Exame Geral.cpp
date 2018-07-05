// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Exame Geral
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2534

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n, q, p[102],x;

bool cmp(int a, int b){
  return a>b;
}

int main(){_
  while (cin>>n>>q){
      for (int i=n;i--;){
        cin>>p[i];
      }
      sort(p,p+n,cmp);
      while (q--){
        cin>>x;
        cout<<p[x-1]<<endl;
      }
  }
  return 0;
}

