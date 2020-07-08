// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Matriz de Quadrados
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1578

#include<bits/stdc++.h>
#define vi vector<int>
#define pb push_back
#define ull unsigned long long
#define MAX 20
#define _ ios_base::sync_with_stdio(0);

using namespace std;

 ull q[MAX][MAX];
 int n,m,dig[MAX],caso=4,d[MAX][MAX];

int main(){
    for (scanf("%i",&n); n--;){
        scanf("%i",&m);
        for (int i=m;i--;) dig[i]=0;
        for (int i=m;i--;){
            for (int j=m;j--;){
                scanf("%llu",&q[i][j]);
                q[i][j]*=q[i][j];
                d[i][j]=log10(q[i][j])+1;
                dig[j]=max(dig[j],d[i][j]);
            }
        }
        if (caso>4) printf("\n");
        printf("Quadrado da matriz #%i:\n",caso++);
        for (int i=m;i--;){
            for (int j=m;j--;){
                if (j==m-1) cout<<setw(dig[j])<<q[i][j];
                else cout<<" "<<setw(dig[j])<<q[i][j];
            }
            printf("\n");
        }
    }
    return 0;
}

