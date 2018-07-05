// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Autopotencial
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2505

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long n,b,e,ans,m;

int main(){_
  while (scanf("%lli",&n)!=EOF){
      m=1;
      for (int i=n; i;i/=10) m*=10;
      for (ans=1, b=e=n; e; b=(b*b)%m, e>>=1LL) if (e&1) ans=(ans*b)%m;
      printf("%s\n",(ans==n ? "SIM" : "NAO"));
  }
  return 0;
}

