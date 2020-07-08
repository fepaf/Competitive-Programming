// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Imagem
// Nível: 2
// Categoria: STRINGS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1516

#include<bits/stdc++.h>
#define MAX 52
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,m,kl,kc,a,b;
char img[MAX][MAX];

int main(){_
  while ((cin>>n>>m)&&(n||m)){
    for (int i=0;i<n;i++){
      for (int j=0;j<m;j++){
        cin>>img[i][j];
      }
    }
    cin>>a>>b;
    kl=a/n , kc=b/m;
    for (int i=0;i<n;i++){
      for (int a=kl;a--;){
        for (int j=0;j<m;j++){
          for (int b=kc;b--;) cout<<img[i][j];
        }
        cout<<endl;
      }
    }
    cout<<endl;
  }
  return 0;
}

