// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Overflow
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2342

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,p,q;
char c;

int main(){
    while (cin>>n>>p>>c>>q) cout<<((c=='+' && p+q>n) || (c=='*' && p*q>n)? "OVERFLOW" : "OK")<<endl;
    return 0;
}

