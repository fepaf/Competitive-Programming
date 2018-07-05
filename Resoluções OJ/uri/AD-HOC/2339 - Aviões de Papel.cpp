// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Aviões de Papel
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2339

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int c,p,f;

int main(){
    while (cin>>c>>p>>f) cout<<(p/c>=f?"S":"N")<<endl;
    return 0;
}

