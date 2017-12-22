// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Recuperação
// Nível: 2
// Categoria: MATEMÁTICA
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2135

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define ll long long

using namespace std;

ll a[1<<7],n,sum,caso;

inline string f(){
    ll sum=0;
    for (int i=1;i<=n;i++){
        if (a[i]==sum){
            return to_string(a[i]);
        }
        sum += a[i];
    }
    return "nao achei";
}

int main(){_
    while (cin>>n){
        for (int i=1;i<=n;i++){
            cin>>a[i];
        }
        cout<<"Instancia "<<++caso<<endl<<f()<<endl<<endl;
    }
    return 0;
}

