// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Super Primos: Ativar!
// Nível: 2
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2674

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long
#define EPS (1e-10)

using namespace std;

int n,ans;

int ehprimo(int n){
    if ((n<5) || (n%2==0) || (n%3==0)) return ((n==2)||(n==3));
    for (int i=5; i*i<=n; i+=6) if ((n%i==0)||(n%(i+2)==0)) return 0;
    return 1;
}

int super(int n){
    int mask=0;
    if (!ehprimo(n)) return 2;
    do{
        mask |= (1<<(n%10));
        n/=10;
    }while(n);
    return ((mask | 172)  == 172);
}

int main(){_
    while (cin>>n){
        ans = super(n);
        cout<<(ans == 2 ? "Nada" : (ans ? "Super" : "Primo"))<<endl;
    }
    return 0;
}

