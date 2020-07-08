// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Pro Habilidade
// Nível: 1
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2337

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

long long  n,fib[44],mdc,i;

int main(){

    for (fib[1]=fib[2]=1,i=3;i<=43;i++) fib[i]=fib[i-1]+fib[i-2];

    while (cin>>n){
        mdc=__gcd(fib[n+2],1LL<<n);
        cout<<fib[n+2]/mdc<<"/"<<(1LL<<n)/mdc<<endl;
    }
    return 0;
}

