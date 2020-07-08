// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Jogo do Limite
// Nível: 1
// Categoria: AD-HOC
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1895

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int n,l,t0,a,b,s,p[2],c;

int main(){_
    cin>>n>>t0>>l;
    while (--n){
        cin>>s;
        p[c]+=(abs(t0-s)<=l)*abs(t0-s);
        if (abs(t0-s)<=l) t0=s;
        c=1-c;
    }
    cout<<p[0]<<" "<<p[1]<<endl;
    return 0;
}

