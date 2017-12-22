// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Base 32
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1869

#include<bits/stdc++.h>
#define ull unsigned long long
#define _ ios_base::sync_with_stdio(0);

using namespace std;

string to32(ull x){
  if (!x) return "";
  return to32(x>>5)+(char)((x%32)+((x%32) < 10 ? '0' : 'A'-10));
}

ull n;

int main(){_
  while (cin>>n && n){
    cout<<to32(n)<<endl;
  }
  cout<<"0"<<endl;
  return 0;
}

