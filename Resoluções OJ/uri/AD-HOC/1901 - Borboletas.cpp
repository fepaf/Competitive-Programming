// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Borboletas
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1901

#include <cstdio>
#include <set>
#define maxn 200
 
using namespace std;
 
set <int> conj;
 
int n,k[maxn][maxn],i,j,l,c;
 
int main(){
 
    scanf("%i",&n);
 
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            scanf("%i",&k[i][j]);
        }
    }
 
    for (i=0;i<2*n;i++){
     scanf("%i %i",&l,&c);
     conj.insert(k[l-1][c-1]);
    }
 
    printf("%i\n",conj.size());
 
    return 0;
}
