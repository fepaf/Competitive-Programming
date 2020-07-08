// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Lanchonete
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2089

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAXV 100123
using namespace std;

int pd[MAXV],v,n,x;

int main(){_
    while ((cin>>v>>n)&&(v||n)){
        pd[0]=1;
        while (n--){
            cin>>x;
            for (int i=v;i>=x && !pd[v];i--) pd[i]|=pd[i-x];
        }
        cout<<(pd[v] ? "sim":"nao")<<"\n";
        for (int i=v+1;i--;) pd[i]=0;
    }
    return 0;
}

