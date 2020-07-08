// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Estágio
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2533

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1000123
#define vi vector<ll>
#define eb emplace_back
#define ll long long

using namespace std;

double sc,snc,n,c;
int m;

int main(){_
    cout<<fixed<<setprecision(4);
    while (cin>>m){
        sc = snc = 0;
        while (m--){
            cin>>n>>c;
            sc += c;
            snc += n*c;
        }
        cout<<(snc/sc)/100.0<<endl;
    }
    return 0;
}

