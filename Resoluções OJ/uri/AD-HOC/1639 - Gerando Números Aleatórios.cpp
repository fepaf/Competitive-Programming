// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Gerando Números Aleatórios
// Nível: 2
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1639

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define endl '\n'

using namespace std;

int f(int a){
    return ((a*a)/100)%10000;
}

int fcf(int x){
    set <int> elem;
    elem.insert(x);
    for (int i=111; i--; x=f(x)) elem.insert(x);
    return elem.size();
}

int a0,t;

int main(){_
    while ((cin>>a0)&&a0) cout<<fcf(a0)<<endl;
    return 0;
}
