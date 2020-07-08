// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Dijkstra
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2653

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define MAX 1000123
#define vi vector<ll>
#define eb emplace_back
#define ll long long

using namespace std;

set <string> sj;
string s;

int main(){_
    while (cin>>s){
        sj.insert(s);
    }
    cout<<sj.size()<<endl;
    return 0;
}

