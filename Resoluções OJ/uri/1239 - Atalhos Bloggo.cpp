// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Atalhos Bloggo
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1239

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string s;
int neg,ita;

int main(){_
  while (getline(cin,s)){
    ita=neg=1;
    for (int i=0;i<s.size();i++){
      if (s[i]=='_'){
        s.replace(i,1,(ita ? "<i>" : "</i>"));
        ita^=1;
      }
      else if (s[i]=='*') {
        s.replace(i,1,(neg ? "<b>" : "</b>"));
        neg^=1;
      }
    }
    cout<<s<<endl;
  }
  return 0;
}

