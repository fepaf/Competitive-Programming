// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Ajude Vânia
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2498

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n, c, i, j, h, best[1010][100], w[1010], v[1010];

int main(){_
  while ((scanf("%i %i",&n,&c))&&(n||c)){
    for (i=1;i<=n;i++) scanf("%i %i",&w[i],&v[i]);

    for (i=0;i<=c;i++) best[0][i]=0;

    for (i=1;i<=n;i++){
      best[i][0]=0;
      for (j=1;j<=c;j++){
        if (j>=w[i]){
          if (best[i-1][j-w[i]]+v[i]>best[i-1][j]) best[i][j]=best[i-1][j-w[i]]+v[i];
          else best[i][j]=best[i-1][j];
        }
        else best[i][j]=best[i-1][j];
      }
    }

    printf("Caso %i: %i\n",++h,best[n][c]);
  }
  return 0;
}

