#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 102
#define MAXM 10012

using namespace std;

int n; //número de elementos
int m; //capacidade máxima da mochila
int best[MAXN][MAXM]; // best[i][j] guarda melhor valor para mochila de capacidade J usando os I primeiros elementos
int tam[MAXN];// tamanho[i] guarda o tamanho do objeto I
int val[MAXN];// val[i] guarda o valor do objeto I

int main(){_
    while (cin>>n>>m){

        for (int i=1; i<=n; i++){
            cin>>tam[i]>>val[i];
        }
        
        for (int i=0; i<=n; i++){
            best[i][0] = 0;
        }
        
        for (int j = 0; j<=m; j++){
            best[0][j] = 0;
        }
        
        for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++){
                if (tam[i]<=j){//se ele cabe
                    best[i][j] = max(best[i-1][j], best[i-1][j-tam[i]] + val[i]);//escolhe o melhor entre colocar ou não colocar o elemento I
                }
                else {
                    best[i][j] = best[i-1][j];
                }
            }
        }
        
        cout<<best[n][m]<<endl;
        
    }
    return 0;
}
