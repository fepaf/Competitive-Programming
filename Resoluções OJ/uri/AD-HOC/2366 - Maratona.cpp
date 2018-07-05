// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Maratona
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2366

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n, m, ans, ant, p;

int main(){_
    while(cin>>n>>m){
        ans = 1;
        for (cin>>ant; --n;){
            cin>>p;
            ans &= (p-ant<=m);
            ant = p;
        }
        ans &= (42195-ant<=m);
        cout<<(ans ? 'S' : 'N')<<endl;
    }
    return 0;
}

