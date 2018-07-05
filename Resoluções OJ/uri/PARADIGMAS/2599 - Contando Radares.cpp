// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Contando Radares
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2599

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX (1<<10)
#define MOD 1000000007
using namespace std;

long long c,n,m,r[MAX],pd[10*MAX];

int main(){_
    cin>>c;
    while (c--){
        cin>>n>>m;
        for (int i=1;i<=m;i++){
            cin>>r[i];
        }
        pd[0]=1;
        for (int i=1;i<=n;i++){
            pd[i]=0;
            for (int j=1;j<=m;j++){
                pd[i]+=(i-r[j] > 0 ? pd[i-r[j]] : 1);
            }
            pd[i]%=MOD;
        }
        cout<<pd[n]<<endl;
    }
    return 0;
}

