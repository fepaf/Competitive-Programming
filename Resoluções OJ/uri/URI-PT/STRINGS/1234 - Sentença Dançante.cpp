// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Sentença Dançante
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1234

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string s;
int cmt;

int main(){_
  while (getline(cin,s)){
    cmt=1;
    for (int i=0;i<s.size();i++){
      if (s[i]!=' '){
        s[i] = (cmt ? toupper(s[i]) : tolower(s[i]));
        cmt^=1;
      }
    }
    cout<<s<<endl;
  }
  return 0;
}

