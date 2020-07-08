// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Circuito Bioquímico Digital
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1486

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define maxp 1012
#define maxn maxp

using namespace std;

int n,p,c,i,j,bdc[maxn][maxp],r,cont;

int main(){_
    while ((cin>>p>>n>>c)&& (p||n||c)){
        for (i=n;i--;){
            for (j=p;j--;){
                cin>>bdc[i][j];
            }
        }
        r=0;
        for (i=0;i<p;i++){
            for (j=0;j<n;j++){
                for (cont=0;bdc[j][i] && j<n;cont++,j++);
                if (cont) j--;
                r+=(cont>=c);
            }
        }
        cout<<r<<endl;
    }
    return 0;
}

