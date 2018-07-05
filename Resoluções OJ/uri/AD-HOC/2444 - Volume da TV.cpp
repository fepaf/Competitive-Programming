// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Volume da TV
// Nível: 5
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/2444

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int v,t,a,d;

int main(){_
    while (cin>>v>>t){
        while (t--){
            cin>>a;
            v += a;
            v = min(v,100);
            v = max(v,0);
        }
        cout<<v<<endl;
    }
    return 0;
}

