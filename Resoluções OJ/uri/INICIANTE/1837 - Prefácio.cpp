// Autor: [GAPA] Francisco Arcos Filho<francisco.fepaf@gmail.com>
// Nome: Prefácio
// Nível: 1
// Categoria: INICIANTE
// URL: https://www.urionlinejudge.com.br/judge/pt/problems/view/1837

#include<bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);

using namespace std;

int main(){
    int a,b,q,r;
    while (cin>>a>>b){
        r=((a%b)+abs(b))%abs(b);
        q=(a-r)/b;
        cout<<q<<" "<<r<<endl;
    }
    return 0;
}

