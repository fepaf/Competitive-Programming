// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Problema com um Pentágono
// Nível: 4
// Categoria: GEOMETRIA COMPUTACIONAL
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1292

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1000123
#define vi vector<ll>
#define eb emplace_back
#define ll long long

using namespace std;

double p,pi=2*acos(0.0),q;

int main(){_
    cout<<fixed<<setprecision(10);
    while (cin>>p){
        q = (p*sin((108.0/180.)*pi))/sin((63.0/180.0)*pi);
        cout<<q<<endl;
    }
    return 0;
}

