// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: A Única Chance
// Nível: 1
// Categoria: ESTRUTURAS E BIBLIOTECAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2496

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n, m, t, i;
string s, o;

int main(){_
  cin>>n;
  while (n--){
    cin>>m>>s;
    o=s;
    sort(o.begin(),o.end());
    t=0;
    for (i=o.size();i--;){
      t+=(o[i]!=s[i]);
    }
    cout<<"There are"<<(t==2?"":"n\'t")<<" the chance."<<endl;
  }
  return 0;
}

