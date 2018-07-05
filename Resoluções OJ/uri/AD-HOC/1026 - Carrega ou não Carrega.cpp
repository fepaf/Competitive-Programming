// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Carrega ou não Carrega?
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1026

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

unsigned int n,m;

int main(){_
    while (cin>>n>>m){
        cout<<(n^m)<<endl;
    }
    return 0;
}

