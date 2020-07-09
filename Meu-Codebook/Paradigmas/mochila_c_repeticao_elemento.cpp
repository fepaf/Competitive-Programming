#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXN 102
#define MAXM 10012

using namespace std;

int n; //número de elementos
int m; //capacidade máxima da mochila
int best[MAXM]; // best[j] guarda melhor valor para mochila de capacidade J
int tam[MAXN];// tamanho[i] guarda o tamanho do objeto I
int val[MAXN];// val[i] guarda o valor do objeto I

//nesta versão pode repetir elementos

int main(){_
    while (cin>>n>>m){

        for (int i=1; i<=n; i++){
            cin>>tam[i]>>val[i];
        }
        
        
        for (int j = 0; j<=m; j++){
            best[j] = 0;
        }
        
        for (int i=1; i<=n; i++){
            for (int j=tam[i]; j<=m; j++){
                    best[j] = max(best[j], best[j-tam[i]] + val[i]);
                }
            }
        }
        
        cout<<best[m]<<endl;
        
    }
    return 0;
}
