// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Museu Virtual 3D
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2548

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,ans,v;

int main(){_
  while (cin>>n>>m){
    for (int i=n-m;i--;) cin>>v;
    ans=0;
    for (int i=m;i--;){
      cin>>v;
      ans+=v;
    }
    cout<<ans<<endl;
  }
  return 0;
}

