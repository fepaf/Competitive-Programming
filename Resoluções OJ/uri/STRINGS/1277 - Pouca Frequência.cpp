// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pouca Frequência
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1277

#include<bits/stdc++.h>
#define MAX 102
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string nome[MAX],pres,ans;
int n,t;
double tot,p;

int main(){_
  for (cin>>t; t--;){
    cin>>n;
    for (int i=n;i--;){
      cin>>nome[i];
    }
    ans="";
    for (int i=n; i--;){
      cin>>pres;
      p=tot=0;
      for (int j=pres.size();j--;){
        tot+=(pres[j]!='M');
        p+=(pres[j]=='P');
      }
      ans+=(p/tot<0.75 ? nome[i]+" " : "");
    }
    cout<<ans.substr(0,ans.size()-1)<<endl;
  }
  return 0;
}

