// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Plano de Dieta
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1248

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string dieta, cafe, almoco;
int d,c,a,n;

int mask(string s){
  int ans=0;
  for (int i=s.size();i--;){
    if ((1<<(s[i]-'A'))&ans) return -1;
    ans^=(1<<(s[i]-'A'));
  }
  return ans;
}

int main(){_
  cin>>n;
  cin.ignore();
  while (n--){
    getline(cin,dieta);
    d=mask(dieta);
    getline(cin,cafe);
    c=mask(cafe);
    getline(cin,almoco);
    a=mask(almoco);
    if ((c==-1)||(a==-1)||((c!=-1 && a!=-1) && ((c&a)||((c|a)&~d)))){
      cout<<"CHEATER"<<endl;
    }
    else {
      for (int i=0;i<26;i++){
        if ((1<<i)&(d&~(c|a))) cout<<((char)('A'+i));
      }
      cout<<endl;
    }
  }
  return 0;
}

