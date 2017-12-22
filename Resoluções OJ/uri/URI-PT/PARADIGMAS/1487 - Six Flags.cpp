// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Six Flags
// Nível: 2
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1487

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXT 602

using namespace std;

int h,n,t,d,p,best[MAXT],i,j;

int main(){_
    while ((cin>>n>>t) && n){
        for (i=0;i<n;i++){
            cin>>d>>p;
            for (j=d;j<=t;j++) best[j]=max(best[j],best[j-d]+p);
        }
        cout<<"Instancia "<<++h<<"\n"<<best[t]<<"\n\n";

        for (j=0;j<=t;j++) best[j]=0;
    }
    return 0;
}

