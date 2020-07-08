// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Contando Ciclos
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2497

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n, x;

int main(){_
  while ((cin>>n)&&(n!=-1)) cout<<"Experiment "<<(++x)<<": "<<(n>>1)<<" full cycle(s)"<<endl;
  return 0;
}

