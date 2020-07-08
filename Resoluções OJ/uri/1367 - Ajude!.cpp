// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ajude!
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1367

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int s,p,n,t,tc[26],pn[26];
char id;
string judg;

int main(){_
  while ((cin>>n)&&n){
    for (int i=26;i--;) pn[i]=0;
    s=p=0;
    while (n--){
      cin>>id>>t>>judg;
      if (judg=="incorrect"){
        pn[id-'A']+=20;
      }
      else{
        ++s;
        p+=pn[id-'A']+t;
      }
    }
    cout<<s<<" "<<p<<endl;
  }
  return 0;
}

