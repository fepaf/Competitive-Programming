// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Em Perigo
// Nível: 3
// Categoria: PARADIGMAS
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1672

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define vi vector<int>

using namespace std;

double n;
int x,i,ans;

int main () {_
    while ((cin>>n) && (n!=0)){
        x=n;
        for (i=0;(1<<(i+1))<=x;i++);
        ans=((x-(1<<i))<<1)|1;
        cout<<ans<<endl;
    }
    return 0;
}

